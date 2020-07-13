#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DictionaryBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DictionaryBase"));
	}


	template <typename T = void*> T get_Values() {
		return ((T (*)(DictionaryBase*))(Il2CppBase() + 0x4E0F2BC))(this);
	}

};

}
