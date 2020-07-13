#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertSecondsToString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertSecondsToString"));
	}

	template <typename T = uintptr_t> T& secondsVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& format() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ConvertSecondsToString*))(Il2CppBase() + 0x4FBE4A0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertSecondsToString*))(Il2CppBase() + 0x4FBE53C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertSecondsToString*))(Il2CppBase() + 0x4FBEC5C))(this);
	}
	template <typename T = void> T DoConvertSecondsToString() {
		return ((T (*)(ConvertSecondsToString*))(Il2CppBase() + 0x4FBE568))(this);
	}

};

}
