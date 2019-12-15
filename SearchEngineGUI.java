/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.awt.Rectangle;
import java.io.FileNotFoundException;
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;
import javafx.scene.layout.FlowPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.web.WebEngine;
import javafx.scene.web.WebView;
import javafx.stage.Stage;
import jsjf.ArrayStack;
import jsjf.ArrayUnorderedList;
import jsjf.SearchEngine;
import websearch.URLWords;
import websearch.WebCrawlResultReader;

/**
 *
 * @author User
 */
public class SearchEngineGUI extends Application {

    String s = "";
    ArrayStack<String> backstack = new ArrayStack();
    ArrayStack<String> forwardstack = new ArrayStack();

    @Override
    public void start(Stage primaryStage) throws FileNotFoundException {

        ArrayUnorderedList<URLWords> crawlResult = WebCrawlResultReader.readFromFile("crawlResultRWU.txt");

        SearchEngine se = new SearchEngine(crawlResult);

        TextField txt1 = new TextField("Enter web address");

        WebView webView = new WebView();

        WebEngine webEngine = webView.getEngine();

        Button gbtn = new Button();

        gbtn.setText("Go");

        gbtn.setOnAction(new EventHandler<ActionEvent>() {

            @Override
            public void handle(ActionEvent event) {

                if (!s.equals("")) {
                    backstack.push(s);
                }
                s = txt1.getText();
                webEngine.load(s);
                txt1.setText(s);

            }

        });

        Button bbtn = new Button();

        bbtn.setText("Back");

        bbtn.setOnAction(new EventHandler<ActionEvent>() {

            @Override
            public void handle(ActionEvent event) {

                if (!backstack.isEmpty()) {

                    forwardstack.push(s);
                    s = backstack.pop();
                    webEngine.load(s);
                    txt1.setText(s);

                }
            }
        });

        Button fbtn = new Button();

        fbtn.setText("Forward");

        fbtn.setOnAction(new EventHandler<ActionEvent>() {

            @Override
            public void handle(ActionEvent event) {

                if (!forwardstack.isEmpty()) {

                    backstack.push(s);
                    s = forwardstack.pop();
                    webEngine.load(s);
                    txt1.setText(s);
                }
            }

        });

        TextField txt2 = new TextField("Enter search term");

        WebView webView2 = new WebView();

        WebEngine webEngine2 = webView.getEngine();

        Button sbtn = new Button();

        sbtn.setText("Search");

        TextArea txtarea = new TextArea();

        sbtn.setOnAction(new EventHandler<ActionEvent>() {

            @Override
            public void handle(ActionEvent event) {

                String query = txt2.getText();
                String result = se.search(query.toLowerCase());
                txtarea.setText(result);
            }

        });


        HBox Hbox = new HBox();

        Hbox.getChildren().add(txt1);
        Hbox.getChildren().add(gbtn);
        Hbox.getChildren().add(bbtn);
        Hbox.getChildren().add(fbtn);
        Hbox.getChildren().add(txt2);
        Hbox.getChildren().add(sbtn);

        HBox Hbox2 = new HBox();

        Hbox2.getChildren().add(webView);
        Hbox2.getChildren().add(txtarea);

        VBox Vbox = new VBox();

        Vbox.getChildren().add(Hbox);
        Vbox.getChildren().add(Hbox2);

        //Button btn = new Button();
        // btn.setText("Say 'Hello World'");
        // btn.setOnAction(new EventHandler<ActionEvent>() {
        // @Override
        // public void handle(ActionEvent event) {
        //  System.out.println("Hello World!");
        //}
        //});
        // StackPane root = new StackPane();
        // root.getChildren().add(btn);
        Scene scene = new Scene(Vbox, 1000, 900);

        primaryStage.setTitle("Web Search");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
    /**
     * @param args the command line arguments
     */

}
