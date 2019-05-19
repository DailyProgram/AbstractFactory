#include <iostream>

#include "src/MusicFactoryInterface.h"
#include "src/ProductInterface.h"
#include "src/GuitarFactory.h"
#include "src/DrumFactory.h"
#include "src/SynthesizerFactory.h"

using namespace std;

int main() {
    cout << "What do you want buy?" << endl;
    cout << "1:Guitar" << endl;
    cout << "2:Drum" << endl;
    cout << "3:Synthesizer" << endl;
    int chooseInstrument;
    cin >> chooseInstrument;

    MusicFactoryInterface *musicFactoryInterface;

    switch (chooseInstrument) {
        case 1:
            musicFactoryInterface = new GuitarFactory;
            break;
        case 2:
            musicFactoryInterface = new DrumFactory;
            break;
        case 3:
            musicFactoryInterface = new SynthesizerFactory;
            break;
    }
    ProductInterface *product = musicFactoryInterface->create();

    cout << product->get_name() << endl;
    cout << product->get_price() << endl;

    delete[] musicFactoryInterface;
    delete[] product;


    return 0;
}