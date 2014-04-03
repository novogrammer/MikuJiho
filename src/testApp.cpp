#include "testApp.h"


MikuManager::MikuManager(){
    mMojiTable.push_back("あ");
    mMojiTable.push_back("い");
    mMojiTable.push_back("う");
    mMojiTable.push_back("え");
    
    mMojiTable.push_back("お");
    mMojiTable.push_back("か");
    mMojiTable.push_back("き");
    mMojiTable.push_back("く");
    
    mMojiTable.push_back("け");
    mMojiTable.push_back("こ");
    mMojiTable.push_back("が");
    mMojiTable.push_back("ぎ");
    
    mMojiTable.push_back("ぐ");
    mMojiTable.push_back("げ");
    mMojiTable.push_back("ご");
    mMojiTable.push_back("きゃ");
    
    mMojiTable.push_back("きゅ");
    mMojiTable.push_back("きょ");
    mMojiTable.push_back("ぎゃ");
    mMojiTable.push_back("ぎゅ");
    
    mMojiTable.push_back("ぎょ");
    mMojiTable.push_back("さ");
    mMojiTable.push_back("すぃ");
    mMojiTable.push_back("す");
    
    mMojiTable.push_back("せ");
    mMojiTable.push_back("そ");
    mMojiTable.push_back("ざ");//TODO: づぁ
    mMojiTable.push_back("ずぃ");//TODO: づぃ
    
    mMojiTable.push_back("ず");//TODO: づ
    mMojiTable.push_back("ぜ");//TODO: づぇ
    mMojiTable.push_back("ぞ");//TODO: づぉ
    mMojiTable.push_back("しゃ");

    mMojiTable.push_back("し");
    mMojiTable.push_back("しゅ");
    mMojiTable.push_back("しぇ");
    mMojiTable.push_back("しょ");
    
    mMojiTable.push_back("じゃ");
    mMojiTable.push_back("じ");
    mMojiTable.push_back("じゅ");
    mMojiTable.push_back("じぇ");
    
    mMojiTable.push_back("じょ");
    mMojiTable.push_back("た");
    mMojiTable.push_back("てぃ");
    mMojiTable.push_back("とぅ");
    
    mMojiTable.push_back("て");
    mMojiTable.push_back("と");
    mMojiTable.push_back("だ");
    mMojiTable.push_back("でぃ");
    
    mMojiTable.push_back("どぅ");
    mMojiTable.push_back("で");
    mMojiTable.push_back("ど");
    mMojiTable.push_back("てゅ");
    
    mMojiTable.push_back("でゅ");
    mMojiTable.push_back("ちゃ");
    mMojiTable.push_back("ち");
    mMojiTable.push_back("ちゅ");
    
    mMojiTable.push_back("ちぇ");
    mMojiTable.push_back("ちょ");
    mMojiTable.push_back("つぁ");
    mMojiTable.push_back("つぃ");
    
    mMojiTable.push_back("つ");
    mMojiTable.push_back("つぇ");
    mMojiTable.push_back("つぉ");
    mMojiTable.push_back("な");
    
    mMojiTable.push_back("に");
    mMojiTable.push_back("ぬ");
    mMojiTable.push_back("ね");
    mMojiTable.push_back("の");
    
    mMojiTable.push_back("にゃ");
    mMojiTable.push_back("にゅ");
    mMojiTable.push_back("にょ");
    mMojiTable.push_back("は");
    
    mMojiTable.push_back("ひ");
    mMojiTable.push_back("ふ");
    mMojiTable.push_back("へ");
    mMojiTable.push_back("ほ");
    
    mMojiTable.push_back("ば");
    mMojiTable.push_back("び");
    mMojiTable.push_back("ぶ");
    mMojiTable.push_back("べ");
    
    mMojiTable.push_back("ぼ");
    mMojiTable.push_back("ぱ");
    mMojiTable.push_back("ぴ");
    mMojiTable.push_back("ぷ");
    
    mMojiTable.push_back("ぺ");
    mMojiTable.push_back("ぽ");
    mMojiTable.push_back("ひゃ");
    mMojiTable.push_back("ひゅ");
    
    mMojiTable.push_back("ひょ");
    mMojiTable.push_back("びゃ");
    mMojiTable.push_back("びゅ");
    mMojiTable.push_back("びょ");
    
    mMojiTable.push_back("ぴゃ");
    mMojiTable.push_back("ぴゅ");
    mMojiTable.push_back("ぴょ");
    mMojiTable.push_back("ふぁ");
    
    mMojiTable.push_back("ふぃ");
    mMojiTable.push_back("ふゅ");
    mMojiTable.push_back("ふぇ");
    mMojiTable.push_back("ふぉ");
    
    mMojiTable.push_back("ま");
    mMojiTable.push_back("み");
    mMojiTable.push_back("む");
    mMojiTable.push_back("め");
    
    mMojiTable.push_back("も");
    mMojiTable.push_back("みゃ");
    mMojiTable.push_back("みゅ");
    mMojiTable.push_back("みょ");
    
    mMojiTable.push_back("や");
    mMojiTable.push_back("ゆ");
    mMojiTable.push_back("よ");
    mMojiTable.push_back("ら");
    
    mMojiTable.push_back("り");
    mMojiTable.push_back("る");
    mMojiTable.push_back("れ");
    mMojiTable.push_back("ろ");
    
    mMojiTable.push_back("りゃ");
    mMojiTable.push_back("りゅ");
    mMojiTable.push_back("りょ");
    mMojiTable.push_back("わ");
    
    mMojiTable.push_back("うぃ");//TODO: ゐ
    mMojiTable.push_back("うぇ");//TODO: ゑ
    mMojiTable.push_back("うぉ");//TODO: を
    mMojiTable.push_back("ん");
    
    mMojiTable.push_back("ん");
    mMojiTable.push_back("ん");
    mMojiTable.push_back("ん");
    mMojiTable.push_back("ん");
    
    
    mHourWords.push_back("れいじ");
    mHourWords.push_back("いちじ");
    mHourWords.push_back("にじ");
    mHourWords.push_back("さんじ");
    mHourWords.push_back("よじ");
    mHourWords.push_back("ごじ");
    mHourWords.push_back("ろくじ");
    mHourWords.push_back("ななじ");
    mHourWords.push_back("はちじ");
    mHourWords.push_back("くじ");
    mHourWords.push_back("じゅうじ");
    mHourWords.push_back("じゅういちじ");
    mHourWords.push_back("じゅうにじ");
    mHourWords.push_back("じゅうさんじ");
    mHourWords.push_back("じゅうよじ");
    mHourWords.push_back("じゅうごじ");
    mHourWords.push_back("じゅうろくじ");
    mHourWords.push_back("じゅうななじ");
    mHourWords.push_back("じゅうはちじ");
    mHourWords.push_back("じゅうくじ");
    mHourWords.push_back("にじゅうじ");
    mHourWords.push_back("にじゅういちじ");
    mHourWords.push_back("にじゅうにじ");
    mHourWords.push_back("にじゅうさんじ");
    
    mMinuteWords.push_back("れいふん");
    mMinuteWords.push_back("いっぷん");
    mMinuteWords.push_back("にふん");
    mMinuteWords.push_back("さんぷん");
    mMinuteWords.push_back("よんふん");
    mMinuteWords.push_back("ごふん");
    mMinuteWords.push_back("ろっぷん");
    mMinuteWords.push_back("ななふん");
    mMinuteWords.push_back("はっぷん");
    mMinuteWords.push_back("きゅうふん");
    mMinuteWords.push_back("じゅっぷん");
    mMinuteWords.push_back("じゅういっぷん");
    mMinuteWords.push_back("じゅうにふん");
    mMinuteWords.push_back("じゅうさんぷん");
    mMinuteWords.push_back("じゅうよんふん");
    mMinuteWords.push_back("じゅうごふん");
    mMinuteWords.push_back("じゅうろっぷん");
    mMinuteWords.push_back("じゅうななふん");
    mMinuteWords.push_back("じゅうはっぷん");
    mMinuteWords.push_back("じゅうきゅうふん");
    mMinuteWords.push_back("にじゅっぷん");
    mMinuteWords.push_back("にじゅういっぷん");
    mMinuteWords.push_back("にじゅうにふん");
    mMinuteWords.push_back("にじゅうさんぷん");
    mMinuteWords.push_back("にじゅうよんふん");
    mMinuteWords.push_back("にじゅうごふん");
    mMinuteWords.push_back("にじゅうろっぷん");
    mMinuteWords.push_back("にじゅうななふん");
    mMinuteWords.push_back("にじゅうはっぷん");
    mMinuteWords.push_back("にじゅうきゅうふん");
    mMinuteWords.push_back("さんじゅっぷん");
    mMinuteWords.push_back("さんじゅういっぷん");
    mMinuteWords.push_back("さんじゅうにふん");
    mMinuteWords.push_back("さんじゅうさんぷん");
    mMinuteWords.push_back("さんじゅうよんふん");
    mMinuteWords.push_back("さんじゅうごふん");
    mMinuteWords.push_back("さんじゅうろっぷん");
    mMinuteWords.push_back("さんじゅうななふん");
    mMinuteWords.push_back("さんじゅうはっぷん");
    mMinuteWords.push_back("さんじゅうきゅうふん");
    mMinuteWords.push_back("よんじゅっぷん");
    mMinuteWords.push_back("よんじゅういっぷん");
    mMinuteWords.push_back("よんじゅうにふん");
    mMinuteWords.push_back("よんじゅうさんぷん");
    mMinuteWords.push_back("よんじゅうよんふん");
    mMinuteWords.push_back("よんじゅうごふん");
    mMinuteWords.push_back("よんじゅうろっぷん");
    mMinuteWords.push_back("よんじゅうななふん");
    mMinuteWords.push_back("よんじゅうはっぷん");
    mMinuteWords.push_back("よんじゅうきゅうふん");
    mMinuteWords.push_back("ごじゅっぷん");
    mMinuteWords.push_back("ごじゅういっぷん");
    mMinuteWords.push_back("ごじゅうにふん");
    mMinuteWords.push_back("ごじゅうさんふん");
    mMinuteWords.push_back("ごじゅうよんふん");
    mMinuteWords.push_back("ごじゅうごふん");
    mMinuteWords.push_back("ごじゅうろっぷん");
    mMinuteWords.push_back("ごじゅうななふん");
    mMinuteWords.push_back("ごじゅうはっぷん");
    mMinuteWords.push_back("ごじゅうきゅうふん");

    mSaying="";
    mCountAfter=-1;
    mMidiOut.openPort(0);
    
    
    assert(mMojiTable.size()==128);
    assert(mHourWords.size()==24);
    assert(mMinuteWords.size()==60);
    
    /*
    for(int i=0;i<mHourWords.size();++i){
        say(mHourWords[i]+"　");
    }
    for(int i=0;i<mMinuteWords.size();++i){
        say(mMinuteWords[i]+"　");
    }
    */
    
    
}

void MikuManager::sayNext(){
#if 0
    static const int doremiLength=8;
    static int doremiIndex=doremiLength-1;
    int doremi[doremiLength]={
        64,
        66,
        68,
        69,
        71,
        73,
        75,
        76,
    };
#else
    static const int doremiLength=8;
    static int doremiIndex=doremiLength-1;
    int doremi[doremiLength]={
        64,
        66,
        68,
        66,
        64,
        76,
        64,
        76,
    };
#endif
    
    mMidiOut.sendNoteOff(1, doremi[doremiIndex]);
    
    int matchLength=0;
    int matchIndex=-1;
    if(mSaying.size()>=2){
        for(int i=0;i<mMojiTable.size();++i){
            string &moji=mMojiTable[i];
            int index=mSaying.find(moji);
            if(index==0){
                if(matchLength<moji.size()){
                    matchLength=moji.size();
                    matchIndex=i;
                }
            }
        }
        if(matchLength==0){
            cout << "?:" << mSaying.substr(0,string("あ").size()) << endl;
            mSaying.erase(0,string("あ").size());//ひらがな1文字を想定
            //発音したことにする
            
        }else{
            mSaying.erase(0,matchLength);
            cout << matchIndex << ":" << mMojiTable[matchIndex] << endl;
            vector<unsigned char> mojiMessage;
            
            mojiMessage.push_back(MIDI_SYSEX);
            mojiMessage.push_back(0x43);
            mojiMessage.push_back(0x79);
            mojiMessage.push_back(0x09);
            mojiMessage.push_back(0x11);
            mojiMessage.push_back(0x0A);
            mojiMessage.push_back(0x00);
            mojiMessage.push_back(matchIndex);
            mojiMessage.push_back(MIDI_SYSEX_END);
            
            mMidiOut.sendMidiBytes(mojiMessage);
            ofSleepMillis(10);//念のため
            doremiIndex=(doremiIndex+1)%doremiLength;
            mMidiOut.sendNoteOn(1, doremi[doremiIndex]);
        }
        mCountAfter=0;
    }else{
        mCountAfter=-1;
    }
}
void MikuManager::say(const HMS& inHMS){
    say(mHourWords[inHMS.h]+"　");
    say(mMinuteWords[inHMS.m]+"です　");
}

void MikuManager::update(){
    if(mCountAfter==-1){
        if(!mSaying.empty()){
            sayNext();
        }
    }else{
        ++mCountAfter;
        if(mCountAfter==FPS/4){
            sayNext();
        }
    }
}
void MikuManager::exit(){
    mMidiOut.sendNoteOff(1, 64);
    mMidiOut.closePort();
}



//--------------------------------------------------------------
void testApp::setup(){
	ofSetLogLevel(OF_LOG_VERBOSE);
    
    ofSetVerticalSync(true);
    ofSetFrameRate(FPS);
    
    updateHMS();

}

//--------------------------------------------------------------
void testApp::update(){
    updateHMS();
    
    if(mPrevHMS!=mCurrentHMS && mCurrentHMS.s==0){
        cout << "say" << endl;
        mMikuManager.say(mCurrentHMS);
    }
    mMikuManager.update();
}

//--------------------------------------------------------------
void testApp::draw(){

}

void testApp::exit(){
    mMikuManager.exit();
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}

void testApp::updateHMS(){
    mPrevHMS=mCurrentHMS;
    
    mCurrentHMS.h=ofGetHours();
    mCurrentHMS.m=ofGetMinutes();
    mCurrentHMS.s=ofGetSeconds();
    
}


