#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ISite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ISite"));
	}


	template <typename T = uintptr_t> T get_Container() {
		return ((T (*)(ISite*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ISite*))(Il2CppBase() + 0x0))(this);
	}

};

}
