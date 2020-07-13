#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IndicatorView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IndicatorView"));
	}

	template <typename T = uintptr_t> T& m_DrawType() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_SpriteRendererDefaultScale() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& m_SpriteScale() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_IndicatorVisibleAngleRange() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector2> T& m_HorizontalRange() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector2> T& m_VerticalRange() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector2> T& m_OnScreenEdgeVerticalRange() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector2> T& m_OnScreenEdgeHorizonalRange() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector3> T& m_ScreenPos() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawIndicatorSpriteRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawIndicatorSpriteRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawIndicatorSprites() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawPVPIndicatorSprites() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawIndicatorSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDrawIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateProjectionAngleBetweenLocalPlayerAndIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpriteOnScreenEdge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateIndicatorScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(IndicatorView*))(Il2CppBase() + 0x232E1E0))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(IndicatorView*))(Il2CppBase() + 0x232E1E8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(IndicatorView*))(Il2CppBase() + 0x232E1F4))(this);
	}
	template <typename T = void> T DrawIndicatorSpriteRenderers(Il2CppArray<uintptr_t>* inSpriteRenderers, Il2CppList<uintptr_t>* inIndicator) {
		return ((T (*)(IndicatorView*, Il2CppArray<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x232E29C))(this, inSpriteRenderers, inIndicator);
	}
	template <typename T = void> T DrawIndicatorSpriteRenderer(uintptr_t inMeshGameObject, uintptr_t inIndicator) {
		return ((T (*)(IndicatorView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x232E4F0))(this, inMeshGameObject, inIndicator);
	}
	template <typename T = void> T DrawIndicatorSprites(Il2CppArray<uintptr_t>* inSprites, Il2CppList<uintptr_t>* inIndicator, bool isFreeView) {
		return ((T (*)(IndicatorView*, Il2CppArray<uintptr_t>*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x232F2C4))(this, inSprites, inIndicator, isFreeView);
	}
	template <typename T = void> T DrawPVPIndicatorSprites(Il2CppArray<uintptr_t>* inSprites, Il2CppList<uintptr_t>* inIndicator, bool isFreeView) {
		return ((T (*)(IndicatorView*, Il2CppArray<uintptr_t>*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x232FC3C))(this, inSprites, inIndicator, isFreeView);
	}
	template <typename T = void> T DrawIndicatorSprite(uintptr_t inSprite, uintptr_t inIndicator, bool isFreeView) {
		return ((T (*)(IndicatorView*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x232F4C0))(this, inSprite, inIndicator, isFreeView);
	}
	template <typename T = bool> T CanDrawIndicator(uintptr_t indicator) {
		return ((T (*)(IndicatorView*, uintptr_t))(Il2CppBase() + 0x232FF3C))(this, indicator);
	}
	template <typename T = float> T CalculateProjectionAngleBetweenLocalPlayerAndIndicator(uintptr_t inIndicator) {
		return ((T (*)(IndicatorView*, uintptr_t))(Il2CppBase() + 0x232EB98))(this, inIndicator);
	}
	template <typename T = bool> T IsSpriteOnScreenEdge(Il2CppVector3 inScreenPos) {
		return ((T (*)(IndicatorView*, Il2CppVector3))(Il2CppBase() + 0x232F1C4))(this, inScreenPos);
	}
	template <typename T = void> T CalculateIndicatorScale(uintptr_t inIndicator) {
		return ((T (*)(IndicatorView*, uintptr_t))(Il2CppBase() + 0x232EE6C))(this, inIndicator);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(IndicatorView*))(Il2CppBase() + 0x23300D4))(this);
	}

};

}
