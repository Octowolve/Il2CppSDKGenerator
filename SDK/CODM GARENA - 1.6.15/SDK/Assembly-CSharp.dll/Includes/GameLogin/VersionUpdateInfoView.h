#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class VersionUpdateInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "VersionUpdateInfoView"));
	}

	template <typename T = uintptr_t> T& OKCancel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OnlyOK() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& HorizontalScrollUIPanel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& HorizontalScrollView() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& HorizontalUICenterOnChild() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& HorizontalScrollViewXOffset() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ContentRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& UpdateInfo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TextureCellTemplate() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TextureCellList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LeftButton() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& RightButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ProgressDotTemplate() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ProgressDotList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUrlList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHorizontalScrollUIPanelXOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHorizontalScrollIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHorizontalScrollXOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProgressDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T SetStyle(uintptr_t style) {
		return ((T (*)(VersionUpdateInfoView*, uintptr_t))(Il2CppBase() + 0x2545510))(this, style);
	}
	template <typename T = void> T UpdateUrlList(Il2CppArray<uintptr_t>* urlList) {
		return ((T (*)(VersionUpdateInfoView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x254564C))(this, urlList);
	}
	template <typename T = void> T UpdateTexture(Il2CppArray<uintptr_t>* urlList) {
		return ((T (*)(VersionUpdateInfoView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2546538))(this, urlList);
	}
	template <typename T = void> T UpdateHorizontalScrollUIPanelXOffset(float xOffset) {
		return ((T (*)(VersionUpdateInfoView*, float))(Il2CppBase() + 0x2545D68))(this, xOffset);
	}
	template <typename T = int32_t> T GetHorizontalScrollIndex() {
		return ((T (*)(VersionUpdateInfoView*))(Il2CppBase() + 0x2545B34))(this);
	}
	template <typename T = float> T GetHorizontalScrollXOffset(int32_t index) {
		return ((T (*)(VersionUpdateInfoView*, int32_t))(Il2CppBase() + 0x2545CB0))(this, index);
	}
	template <typename T = void> T UpdateDot(Il2CppArray<uintptr_t>* urlList) {
		return ((T (*)(VersionUpdateInfoView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2546A14))(this, urlList);
	}
	template <typename T = void> T UpdateProgressDot(int32_t index) {
		return ((T (*)(VersionUpdateInfoView*, int32_t))(Il2CppBase() + 0x2545EE8))(this, index);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(VersionUpdateInfoView*))(Il2CppBase() + 0x2546F0C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(VersionUpdateInfoView*, float))(Il2CppBase() + 0x2546F14))(this, dt);
	}
	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(VersionUpdateInfoView*))(Il2CppBase() + 0x254700C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(VersionUpdateInfoView*, float))(Il2CppBase() + 0x25470AC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(VersionUpdateInfoView*))(Il2CppBase() + 0x25470B4))(this);
	}

};

}
