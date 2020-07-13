#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomZombieMatchView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomZombieMatchView"));
	}

	template <typename T = uintptr_t> T& ContainerAutoFill() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& BtnAutoFill() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& BtnCancelAutoFill() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& AnchorLeftBottom() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& AnchorRightBottom() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& WidgetDropsRoot() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& LabelRemainResetTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& LabelDropsAvailable() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& GridDrops() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemTemplates() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& BtnDropRewards() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& DropsNumParticle() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& ObjWeakPromptArrow() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& LabelMapNumLimit() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& PVETutorialBtn() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& btnDynamicDownload() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& dynamicDownloadDialog() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshModeMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAutoFillInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDropsAvailables() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRemainResetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T RefreshModeMapInfo(bool isRoomOwner, int32_t modeId, int32_t instanceId) {
		return ((T (*)(RoomZombieMatchView*, bool, int32_t, int32_t))(Il2CppBase() + 0x213DD28))(this, isRoomOwner, modeId, instanceId);
	}
	template <typename T = void> T SetAutoFillInfo(bool bAutoFill) {
		return ((T (*)(RoomZombieMatchView*, bool))(Il2CppBase() + 0x213E01C))(this, bAutoFill);
	}
	template <typename T = void> T RefreshDropsAvailables(uintptr_t data, uintptr_t conf, double serverTime, int32_t lastInstanceId) {
		return ((T (*)(RoomZombieMatchView*, uintptr_t, uintptr_t, double, int32_t))(Il2CppBase() + 0x213EC38))(this, data, conf, serverTime, lastInstanceId);
	}
	template <typename T = void> T RefreshRemainResetTime(int32_t resetTime, double serverTime) {
		return ((T (*)(RoomZombieMatchView*, int32_t, double))(Il2CppBase() + 0x213EA08))(this, resetTime, serverTime);
	}

};

}
