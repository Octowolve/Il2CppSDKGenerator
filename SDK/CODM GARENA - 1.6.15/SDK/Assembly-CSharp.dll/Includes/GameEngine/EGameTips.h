#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EGameTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EGameTips"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EGAME_TIPS_BR1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EGAME_TIPS_BR2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EGAME_TIPS_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
