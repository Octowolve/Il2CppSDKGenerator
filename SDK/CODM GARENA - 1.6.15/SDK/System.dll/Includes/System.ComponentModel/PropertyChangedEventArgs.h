#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class PropertyChangedEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "PropertyChangedEventArgs"));
	}

	template <typename T = Il2CppString*> T& propertyName() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
