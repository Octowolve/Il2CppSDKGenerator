#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsResistanceCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsResistance_CA"));
	}

	template <typename T = Il2CppVector2> T& m_OrignalSize() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector2> T& m_SafeSize() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector2> T& m_ViewSize() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> static T& m_TitleDistanceToTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_TitleDistanceToRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_BtnDistanceToButtom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_BtnDistanceToRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Panel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& VedioBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& VedioSprite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TextureBg() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& SpriteBg() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_ViewParentWidget() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_bAdaptation() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& m_TextureUrl() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsResistanceCA*))(Il2CppBase() + 0x3521FF4))(this);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(LiveOpsResistanceCA*))(Il2CppBase() + 0x35220A4))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(LiveOpsResistanceCA*, uintptr_t))(Il2CppBase() + 0x35227B8))(this, activity);
	}
	template <typename T = Il2CppString*> T GetDefaultSpriteName() {
		return ((T (*)(LiveOpsResistanceCA*))(Il2CppBase() + 0x3522FD0))(this);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsResistanceCA*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3523088))(this, url, bSuccess, texture);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsResistanceCA*))(Il2CppBase() + 0x35231D4))(this);
	}

};

}
