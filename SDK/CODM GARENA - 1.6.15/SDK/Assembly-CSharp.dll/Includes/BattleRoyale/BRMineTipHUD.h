#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRMineTipHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRMineTipHUD"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& MineTipItems() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> static T& MineTipSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MineTipSpriteName_Gray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRMineTipHUD*))(Il2CppBase() + 0x1AB09A0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRMineTipHUD*, float))(Il2CppBase() + 0x1AB09A8))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRMineTipHUD*, float))(Il2CppBase() + 0x1AB17C0))(this, P0);
	}

};

}
