#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetMouseCursor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetMouseCursor"));
	}

	template <typename T = uintptr_t> T& cursorTexture() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& hideCursor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& lockCursor() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetMouseCursor*))(Il2CppBase() + 0x5029A14))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetMouseCursor*))(Il2CppBase() + 0x5029A54))(this);
	}

};

}
