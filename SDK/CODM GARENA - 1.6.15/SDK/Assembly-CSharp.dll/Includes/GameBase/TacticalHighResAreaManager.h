#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalHighResAreaManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalHighResAreaManager"));
	}

	template <typename T = uintptr_t> T& m_highResAreaSpriteTemplate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_highResAreaSpriteList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_BRGameInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& WidthBaseSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& HeightBaseSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_position() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppQuaternion>*> T& m_quaternion() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_scale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_tacticalbrInstance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitHighResAreaRelativePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSpriteInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalHighResAreaManager*))(Il2CppBase() + 0x30D148C))(this);
	}
	template <typename T = void> T InitHighResAreaRelativePos() {
		return ((T (*)(TacticalHighResAreaManager*))(Il2CppBase() + 0x30D1698))(this);
	}
	template <typename T = void> T UpdateSpriteInfo() {
		return ((T (*)(TacticalHighResAreaManager*))(Il2CppBase() + 0x30D1C60))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalHighResAreaManager*))(Il2CppBase() + 0x30D23B8))(this);
	}
	template <typename T = uintptr_t> T CreateSpriteInstance(uintptr_t spriteTemplate) {
		return ((T (*)(TacticalHighResAreaManager*, uintptr_t))(Il2CppBase() + 0x30D1A2C))(this, spriteTemplate);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalHighResAreaManager*))(Il2CppBase() + 0x30D2918))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalHighResAreaManager*))(Il2CppBase() + 0x30D2920))(this);
	}

};

}
