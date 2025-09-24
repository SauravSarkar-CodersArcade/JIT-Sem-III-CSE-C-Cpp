catch(int errorCode){
        cout << errorCode << "No Paper Available." << endl;
    }
    catch(const char * txtException){
        cout << txtException << endl;
    } 