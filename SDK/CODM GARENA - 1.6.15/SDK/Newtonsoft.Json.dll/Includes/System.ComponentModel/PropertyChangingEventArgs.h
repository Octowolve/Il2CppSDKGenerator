#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class PropertyChangingEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "System.ComponentModel", "PropertyChangingEventArgs"));
	}

	template <typename T = Il2CppString*> T& PropertyName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T set_PropertyName(Il2CppString* value) {
		return ((T (*)(PropertyChangingEventArgs*, Il2CppString*))(Il2CppBase() + 0x4DFB628))(this, value);
	}

};

}
