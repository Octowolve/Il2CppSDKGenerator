#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class InstanceItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "InstanceItemView"));
	}

	template <typename T = uintptr_t> T& LabelNormalName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelNormalModelName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelHighlightName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelHighlightModelName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteResource() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& WidgetSelect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SpriteBgCommon() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SpriteBgHighLight() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& objDownload() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& btnDownload() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LabelDownloadTip() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LabelCompInitTip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BtnDownloadCancel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& objDownloading() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& downloadProgress() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LabelProgress() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& questId() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& mapId() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& downloadProgressMask() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& CHECK_INTERVAL() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& gdc() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInstanceView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDynamicState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGenericState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDynamicProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGenericProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T SetInstanceView(uintptr_t conf) {
		return ((T (*)(InstanceItemView*, uintptr_t))(Il2CppBase() + 0x2CD092C))(this, conf);
	}
	template <typename T = void> T SetState() {
		return ((T (*)(InstanceItemView*))(Il2CppBase() + 0x2CD10B8))(this);
	}
	template <typename T = void> T SetDynamicState() {
		return ((T (*)(InstanceItemView*))(Il2CppBase() + 0x2CD15D0))(this);
	}
	template <typename T = void> T SetGenericState() {
		return ((T (*)(InstanceItemView*))(Il2CppBase() + 0x2CD11D0))(this);
	}
	template <typename T = void> T SetProgress() {
		return ((T (*)(InstanceItemView*))(Il2CppBase() + 0x2CD18F8))(this);
	}
	template <typename T = void> T SetDynamicProgress() {
		return ((T (*)(InstanceItemView*))(Il2CppBase() + 0x2CD1C18))(this);
	}
	template <typename T = void> T SetGenericProgress() {
		return ((T (*)(InstanceItemView*))(Il2CppBase() + 0x2CD1A10))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(InstanceItemView*))(Il2CppBase() + 0x2CD2000))(this);
	}

};

}
