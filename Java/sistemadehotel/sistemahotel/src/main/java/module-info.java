module br.com.cck {
    requires javafx.controls;
    requires javafx.fxml;
    requires transitive javafx.graphics;
    opens br.com.cck to javafx.fxml;
    exports br.com.cck;
}
