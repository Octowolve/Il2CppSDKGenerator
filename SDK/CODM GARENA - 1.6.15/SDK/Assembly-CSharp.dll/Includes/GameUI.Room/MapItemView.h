#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class MapItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "MapItemView"));
	}

	template <typename T = uintptr_t> T& LabelNormalName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelHighlightName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteResource() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SpriteMaskDisable() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& WidgetSelect() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& objDownload() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& btnDownload() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& LabelDownloadTip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LabelCompInitTip() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& BtnDownloadCancel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& objDownloading() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& downloadProgress() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelProgress() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& downloadProgressMask() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_MapData() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& gdc() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& questId() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMapItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreeshDynamicDownloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGenericDownloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDynamicDownloadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGenericDownloadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_MapData() {
		return ((T (*)(MapItemView*))(Il2CppBase() + 0x2CD34C8))(this);
	}
	template <typename T = void> T SetMapItemView(uintptr_t data) {
		return ((T (*)(MapItemView*, uintptr_t))(Il2CppBase() + 0x2CD2790))(this, data);
	}
	template <typename T = void> T RefreeshDynamicDownloadState(uintptr_t data) {
		return ((T (*)(MapItemView*, uintptr_t))(Il2CppBase() + 0x2CD3F20))(this, data);
	}
	template <typename T = void> T RefreshGenericDownloadState(uintptr_t data) {
		return ((T (*)(MapItemView*, uintptr_t))(Il2CppBase() + 0x2CD3A58))(this, data);
	}
	template <typename T = void> T SetDynamicDownloadProgress(uintptr_t mapInfo) {
		return ((T (*)(MapItemView*, uintptr_t))(Il2CppBase() + 0x2CD45B4))(this, mapInfo);
	}
	template <typename T = void> T SetGenericDownloadProgress() {
		return ((T (*)(MapItemView*))(Il2CppBase() + 0x2CD49B0))(this);
	}

};

}
