package com.cck.rpg;

import com.almasb.fxgl.app.GameApplication;
import com.almasb.fxgl.app.GameSettings;
import com.almasb.fxgl.dsl.FXGL;

public class FXGLApp extends GameApplication {

    @Override
    protected void initSettings(GameSettings settings){
        settings.setWidth(1280);
        settings.setHeight(720);
        settings.setTitle("RPG");
        settings.isFullScreenAllowed();
        settings.setFullScreenAllowed(true);
        
        
        //TODO
    }


    @Override
    protected void initGame() {
        FXGL.getGameWorld().addEntityFactory(new Factory());

        FXGL.spawn("enemy", 100,100);
        super.initGame();
    }
    public static void main(String[] args) {
        launch(args);
    }
 
}
