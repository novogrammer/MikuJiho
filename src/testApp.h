#pragma once

#include "ofMain.h"
#include "ofxMidi.h"

struct HMS{
    int h;
    int m;
    int s;
    bool operator==(const HMS& inRhs){
        return
        (this->h==inRhs.h)&&
        (this->m==inRhs.m)&&
        (this->s==inRhs.s);
    }
    bool operator!=(const HMS& inRhs){
        return !((*this)==inRhs);
    }
};

#define FPS 30
class MikuManager{
public:
    ofxMidiOut mMidiOut;
    vector<string> mMojiTable;
    vector<string> mHourWords;
    vector<string> mMinuteWords;
    //vector<string> mSecondWords;
    string mSaying;
    int mCountAfter;
    
    MikuManager();
    void sayNext();
    void say(const string& inSaying){
        mSaying+=inSaying;
    }
    void say(const HMS& inHMS);
    void update();
    void exit();
    
};


class testApp : public ofBaseApp{

public:
    
    
    
    HMS mPrevHMS;
    HMS mCurrentHMS;
    MikuManager mMikuManager;
    
    
    
    void setup();
    void update();
    void draw();
    void exit();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    void updateHMS();
		
};
