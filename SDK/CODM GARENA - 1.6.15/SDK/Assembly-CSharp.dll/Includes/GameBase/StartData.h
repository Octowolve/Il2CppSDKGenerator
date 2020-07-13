#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class StartData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "StartData"));
	}

	template <typename T = Il2CppString*> T& DataName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& BattleID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ClientStartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& UserName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& SvrUserMoney1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SvrUserMoney2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& SvrMapID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& RoomID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SvrGameType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& SvrPVPType1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& SvrPVPType2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& SvrPVPType3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& SvrMapDifficulty() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& SvrUserLevel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& SvrUserHP() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& SvrUserMove() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& SvrUserequip1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SvrUserequip2() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& SvrPackage1WeaponID1() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& SvrPackage1WeaponLv1() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& SvrPackage1WeaponID2() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& SvrPackage1WeaponLv2() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& SvrPackage2WeaponID1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& SvrPackage2WeaponLv1() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& SvrPackage2WeaponID2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& SvrPackage2WeaponLv2() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& SvrPackage3WeaponID1() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& SvrPackage3WeaponLv1() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& SvrPackage3WeaponID2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& SvrPackage3WeaponLv2() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& SvrPackage1WeaponDPS1() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& SvrPackage1WeaponBullet1() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& SvrPackage1WeaponBulletTotal1() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& SvrPackage1WeaponDPS2() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& SvrPackage1WeaponBullet2() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& SvrPackage1WeaponBulletTotal2() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& SvrPackage2WeaponDPS1() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& SvrPackage2WeaponBullet1() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& SvrPackage2WeaponBulletTotal1() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& SvrPackage2WeaponDPS2() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& SvrPackage2WeaponBullet2() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& SvrPackage2WeaponBulletTotal2() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& SvrPackage3WeaponDPS1() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& SvrPackage3WeaponBullet1() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& SvrPackage3WeaponBulletTotal1() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& SvrPackage3WeaponDPS2() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& SvrPackage3WeaponBullet2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& SvrPackage3WeaponBulletTotal2() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uint64_t> T& Player1UID() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& Player1OpenID() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& Player1Level() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& Player1Side() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uint64_t> T& Player2UID() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& Player2OpenID() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& Player2Level() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& Player2Side() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uint64_t> T& Player3UID() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& Player3OpenID() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& Player3Level() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& Player3Side() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uint64_t> T& Player4UID() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> T& Player4OpenID() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& Player4Level() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& Player4Side() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint64_t> T& Player5UID() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppString*> T& Player5OpenID() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& Player5Level() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = int32_t> T& Player5Side() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uint64_t> T& Player6UID() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppString*> T& Player6OpenID() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& Player6Level() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> T& Player6Side() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uint64_t> T& Player7UID() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppString*> T& Player7OpenID() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& Player7Level() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = int32_t> T& Player7Side() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uint64_t> T& Player8UID() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppString*> T& Player8OpenID() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& Player8Level() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> T& Player8Side() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uint64_t> T& Player9UID() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppString*> T& Player9OpenID() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = int32_t> T& Player9Level() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = int32_t> T& Player9Side() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = int32_t> T& GrenadeType() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& BazookaCount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uint64_t> T& BlessingID() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillGameData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordGameData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T FillGameData() {
		return ((T (*)(StartData*))(Il2CppBase() + 0x30AAD2C))(this);
	}
	template <typename T = void> T RecordGameData(uintptr_t matchType) {
		return ((T (*)(StartData*, uintptr_t))(Il2CppBase() + 0x30AADC4))(this, matchType);
	}
	template <typename T = void> T RecordWeaponData(uintptr_t weapon) {
		return ((T (*)(StartData*, uintptr_t))(Il2CppBase() + 0x30AAE64))(this, weapon);
	}
	template <typename T = uintptr_t> T GetData() {
		return ((T (*)(StartData*))(Il2CppBase() + 0x30AAF04))(this);
	}

};

}
