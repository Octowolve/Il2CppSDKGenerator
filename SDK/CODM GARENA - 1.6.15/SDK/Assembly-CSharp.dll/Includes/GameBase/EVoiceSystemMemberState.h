#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EVoiceSystemMemberState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EVoiceSystemMemberState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Silence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& NoSpeak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Speaking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
