#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AudioSystemUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AudioSystemUtils"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_SendEventToAllFsmOnMainObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAllFsmOnMainObjectVariable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T SendEventToAllFsmOnMainObject(Il2CppString* strEventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x35EADF4))(0, strEventName);
	}
	template <typename T = void> static T ChangeAllFsmOnMainObjectVariable(Il2CppString* strVariableName, int32_t iValue) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x35EAFBC))(0, strVariableName, iValue);
	}

};

}
