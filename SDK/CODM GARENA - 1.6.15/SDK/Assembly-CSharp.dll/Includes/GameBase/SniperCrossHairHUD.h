#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SniperCrossHairHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SniperCrossHairHUD"));
	}

	template <typename T = uintptr_t> T& CrosshairSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LeftBackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& RightBackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TopBackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ButtomBackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CenterPointSprite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TopSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BottomSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LeftSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RightSprite() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector3> T& TopScreenPosition() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& BottomScreenPosition() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppVector3> T& LeftScreenPosition() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector3> T& RightScreenPosition() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_ManualDrawCrosshair() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_CrosshairGameObject() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_CrosshairMeshFilter() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_CrosshairMeshRenderer() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& m_CrosshairMesh() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_CrosshairMaterial() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> static T& CROSSHAIR_VERTICES_NUMBER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CrosshairVertices() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CrosshairColors() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CrosshairIndices() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_CircleGrayscale() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCrosshair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T CanChanged() {
		return ((T (*)(SniperCrossHairHUD*))(Il2CppBase() + 0x3092B40))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SniperCrossHairHUD*))(Il2CppBase() + 0x3092BE0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SniperCrossHairHUD*))(Il2CppBase() + 0x30936D0))(this);
	}
	template <typename T = void> T ShowCrosshair() {
		return ((T (*)(SniperCrossHairHUD*))(Il2CppBase() + 0x3092C90))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(SniperCrossHairHUD*))(Il2CppBase() + 0x30937FC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SniperCrossHairHUD*))(Il2CppBase() + 0x30941D0))(this);
	}
	template <typename T = void> T ForceUpdateWidgets() {
		return ((T (*)(SniperCrossHairHUD*))(Il2CppBase() + 0x3094430))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanChanged() {
		return ((T (*)(SniperCrossHairHUD*))(Il2CppBase() + 0x3094840))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(SniperCrossHairHUD*))(Il2CppBase() + 0x3094848))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(SniperCrossHairHUD*))(Il2CppBase() + 0x3094850))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(SniperCrossHairHUD*))(Il2CppBase() + 0x3094858))(this);
	}

};

}
