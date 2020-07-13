#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class WorldToScreenPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "WorldToScreenPoint"));
	}

	template <typename T = uintptr_t> T& worldPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& worldX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& worldY() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& worldZ() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeScreenPoint() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& storeScreenX() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& storeScreenY() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& normalize() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(WorldToScreenPoint*))(Il2CppBase() + 0x4F2077C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(WorldToScreenPoint*))(Il2CppBase() + 0x4F208CC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(WorldToScreenPoint*))(Il2CppBase() + 0x4F20C00))(this);
	}
	template <typename T = void> T DoWorldToScreenPoint() {
		return ((T (*)(WorldToScreenPoint*))(Il2CppBase() + 0x4F208F8))(this);
	}

};

}
