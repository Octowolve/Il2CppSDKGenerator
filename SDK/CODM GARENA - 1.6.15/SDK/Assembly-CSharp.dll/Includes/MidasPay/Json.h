#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class Json
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "Json"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T Deserialize(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x41D2F30))(0, json);
	}
	template <typename T = Il2CppString*> static T Serialize(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41D3188))(0, obj);
	}

};

}
