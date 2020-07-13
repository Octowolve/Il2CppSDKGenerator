#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ChamberBulletHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ChamberBulletHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& AllBulletsList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& YellowBulletsList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AmmoProgressBar() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BuffIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BuffBar() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& StartAddAmmoTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& AddAmmoShowTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& CurAddAmmoNum() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& CurAmmoCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& CurClipAmmoCount() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& SpecialBuffID() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& BuffDuration() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& BuffStartTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& bBuffActive() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& AmmoReadySpriteName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& AmmoNotReadySpriteName() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& AmmoNeedTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& AmmoLeftTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& NewLeftTimeStart() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& AmmoLeftTimeInit() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ThreeBulletsPos() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SixBulletsPos() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSpecialBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffModify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBuffDel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBuffBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBulletsNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelShowNewAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateClipBulletsNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAmmoNeedTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAmmoResumeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerAmmoLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAmmoProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T FindSpecialBuff(uintptr_t Msg, int32_t buffID) {
		return ((T (*)(ChamberBulletHUD*, uintptr_t, int32_t))(Il2CppBase() + 0x3DDC48C))(this, Msg, buffID);
	}
	template <typename T = void> T OnNotifyBuffAdd(uintptr_t Msg) {
		return ((T (*)(ChamberBulletHUD*, uintptr_t))(Il2CppBase() + 0x3DDC68C))(this, Msg);
	}
	template <typename T = void> T OnNotifyBuffModify(uintptr_t Msg) {
		return ((T (*)(ChamberBulletHUD*, uintptr_t))(Il2CppBase() + 0x3DDC90C))(this, Msg);
	}
	template <typename T = void> T OnNotifyBuffDel(uintptr_t Msg) {
		return ((T (*)(ChamberBulletHUD*, uintptr_t))(Il2CppBase() + 0x3DDCA8C))(this, Msg);
	}
	template <typename T = void> T UpdateBuffBar() {
		return ((T (*)(ChamberBulletHUD*))(Il2CppBase() + 0x3DDCC64))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(ChamberBulletHUD*))(Il2CppBase() + 0x3DDCDEC))(this);
	}
	template <typename T = void> T SetBulletsNum(int32_t num, int32_t clipAmmoNum) {
		return ((T (*)(ChamberBulletHUD*, int32_t, int32_t))(Il2CppBase() + 0x3DDCEB0))(this, num, clipAmmoNum);
	}
	template <typename T = void> T CancelShowNewAmmo() {
		return ((T (*)(ChamberBulletHUD*))(Il2CppBase() + 0x3DDD7A8))(this);
	}
	template <typename T = void> T UpdateClipBulletsNum(int32_t num, int32_t clipAmmoNum) {
		return ((T (*)(ChamberBulletHUD*, int32_t, int32_t))(Il2CppBase() + 0x3DDD144))(this, num, clipAmmoNum);
	}
	template <typename T = void> T OnNotifyAmmoNeedTime(uintptr_t Msg) {
		return ((T (*)(ChamberBulletHUD*, uintptr_t))(Il2CppBase() + 0x3DDD85C))(this, Msg);
	}
	template <typename T = void> T OnNotifyAmmoResumeTime(uintptr_t Msg) {
		return ((T (*)(ChamberBulletHUD*, uintptr_t))(Il2CppBase() + 0x3DDD9E4))(this, Msg);
	}
	template <typename T = void> T TimerAmmoLeftTime() {
		return ((T (*)(ChamberBulletHUD*))(Il2CppBase() + 0x3DDDC40))(this);
	}
	template <typename T = void> T UpdateAmmoProgress(float Percent) {
		return ((T (*)(ChamberBulletHUD*, float))(Il2CppBase() + 0x3DDCFEC))(this, Percent);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(ChamberBulletHUD*))(Il2CppBase() + 0x3DDDEB0))(this);
	}

};

}
