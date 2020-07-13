#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class TransitionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "TransitionHelper"));
	}

	template <typename T = uintptr_t> static T& gameViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& getMainGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& gameViewRenderRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& shownResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& mainGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T get_GameViewType() {
		return ((T (*)(void *))(Il2CppBase() + 0x5225780))(0);
	}
	template <typename T = uintptr_t> static T get_GetMainGameView() {
		return ((T (*)(void *))(Il2CppBase() + 0x52258C0))(0);
	}
	template <typename T = uintptr_t> static T get_GameViewRenderRect() {
		return ((T (*)(void *))(Il2CppBase() + 0x5225A28))(0);
	}
	template <typename T = uintptr_t> static T get_ShownResolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x5225B90))(0);
	}
	template <typename T = uintptr_t> static T get_MainGameView() {
		return ((T (*)(void *))(Il2CppBase() + 0x5225CF8))(0);
	}
	template <typename T = Il2CppVector2> static T get_MainGameViewSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x5220668))(0);
	}

};

}
