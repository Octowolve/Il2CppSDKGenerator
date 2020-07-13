#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpLvConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpLvConfConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& NormalAwardList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ChargeAwardList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& AreaID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& SeasonId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Exp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& NoChargeAwardId1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& NoChargeAwardNum1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& NoChargeAwardCntInBox1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& NoChargeAwardAgingTime1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& NoChargeHighlight1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& NoChargeAwardId2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& NoChargeAwardNum2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& NoChargeAwardCntInBox2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& NoChargeAwardAgingTime2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& NoChargeHighlight2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& NoChargeAwardId3() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& NoChargeAwardNum3() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& NoChargeAwardCntInBox3() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& NoChargeAwardAgingTime3() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& NoChargeHighlight3() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& NoChargeAwardId4() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& NoChargeAwardNum4() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& NoChargeAwardCntInBox4() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& NoChargeAwardAgingTime4() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& NoChargeHighlight4() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& ChargeAwardId1() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& ChargeAwardNum1() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& ChargeAwardCntInBox1() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& ChargeAwardAgingTime1() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& ChargeAwardHighlight1() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& ChargeAwardId2() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& ChargeAwardNum2() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& ChargeAwardCntInBox2() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& ChargeAwardAgingTime2() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& ChargeAwardHighlight2() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& ChargeAwardId3() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& ChargeAwardNum3() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& ChargeAwardCntInBox3() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& ChargeAwardAgingTime3() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& ChargeAwardHighlight3() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& ChargeAwardId4() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& ChargeAwardNum4() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& ChargeAwardCntInBox4() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& ChargeAwardAgingTime4() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& ChargeAwardHighlight4() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNormailAwardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddChargeAwardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5AB4))(this);
	}
	template <typename T = void> T AddNormailAwardConfig(int32_t id, int32_t num, Il2CppString* time, int32_t isShowFx) {
		return ((T (*)(SpLvConfConfig*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x30E5DBC))(this, id, num, time, isShowFx);
	}
	template <typename T = void> T AddChargeAwardConfig(int32_t id, int32_t num, Il2CppString* time, int32_t isShowFx) {
		return ((T (*)(SpLvConfConfig*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x30E5F9C))(this, id, num, time, isShowFx);
	}
	template <typename T = int32_t> T get_AreaID() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E615C))(this);
	}
	template <typename T = void> T set_AreaID(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6164))(this, value);
	}
	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E616C))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6174))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E617C))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6184))(this, value);
	}
	template <typename T = int32_t> T get_Exp() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E618C))(this);
	}
	template <typename T = void> T set_Exp(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6194))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardId1() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5D9C))(this);
	}
	template <typename T = void> T set_NoChargeAwardId1(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E619C))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardNum1() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5DA4))(this);
	}
	template <typename T = void> T set_NoChargeAwardNum1(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E61A4))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardCntInBox1() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E61AC))(this);
	}
	template <typename T = void> T set_NoChargeAwardCntInBox1(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E61B4))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardAgingTime1() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5DAC))(this);
	}
	template <typename T = void> T set_NoChargeAwardAgingTime1(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E61BC))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeHighlight1() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5DB4))(this);
	}
	template <typename T = void> T set_NoChargeHighlight1(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E61C4))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardId2() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F1C))(this);
	}
	template <typename T = void> T set_NoChargeAwardId2(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E61CC))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardNum2() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F24))(this);
	}
	template <typename T = void> T set_NoChargeAwardNum2(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E61D4))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardCntInBox2() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E61DC))(this);
	}
	template <typename T = void> T set_NoChargeAwardCntInBox2(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E61E4))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardAgingTime2() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F2C))(this);
	}
	template <typename T = void> T set_NoChargeAwardAgingTime2(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E61EC))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeHighlight2() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F34))(this);
	}
	template <typename T = void> T set_NoChargeHighlight2(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E61F4))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardId3() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F3C))(this);
	}
	template <typename T = void> T set_NoChargeAwardId3(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E61FC))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardNum3() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F44))(this);
	}
	template <typename T = void> T set_NoChargeAwardNum3(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6204))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardCntInBox3() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E620C))(this);
	}
	template <typename T = void> T set_NoChargeAwardCntInBox3(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6214))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardAgingTime3() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F4C))(this);
	}
	template <typename T = void> T set_NoChargeAwardAgingTime3(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E621C))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeHighlight3() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F54))(this);
	}
	template <typename T = void> T set_NoChargeHighlight3(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6224))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardId4() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F5C))(this);
	}
	template <typename T = void> T set_NoChargeAwardId4(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E622C))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardNum4() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F64))(this);
	}
	template <typename T = void> T set_NoChargeAwardNum4(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6234))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardCntInBox4() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E623C))(this);
	}
	template <typename T = void> T set_NoChargeAwardCntInBox4(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6244))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeAwardAgingTime4() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F6C))(this);
	}
	template <typename T = void> T set_NoChargeAwardAgingTime4(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E624C))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeHighlight4() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F74))(this);
	}
	template <typename T = void> T set_NoChargeHighlight4(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6254))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardId1() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F7C))(this);
	}
	template <typename T = void> T set_ChargeAwardId1(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E625C))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardNum1() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F84))(this);
	}
	template <typename T = void> T set_ChargeAwardNum1(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6264))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardCntInBox1() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E626C))(this);
	}
	template <typename T = void> T set_ChargeAwardCntInBox1(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6274))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardAgingTime1() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F8C))(this);
	}
	template <typename T = void> T set_ChargeAwardAgingTime1(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E627C))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardHighlight1() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E5F94))(this);
	}
	template <typename T = void> T set_ChargeAwardHighlight1(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6284))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardId2() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E60FC))(this);
	}
	template <typename T = void> T set_ChargeAwardId2(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E628C))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardNum2() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E6104))(this);
	}
	template <typename T = void> T set_ChargeAwardNum2(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6294))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardCntInBox2() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E629C))(this);
	}
	template <typename T = void> T set_ChargeAwardCntInBox2(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E62A4))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardAgingTime2() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E610C))(this);
	}
	template <typename T = void> T set_ChargeAwardAgingTime2(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E62AC))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardHighlight2() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E6114))(this);
	}
	template <typename T = void> T set_ChargeAwardHighlight2(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E62B4))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardId3() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E611C))(this);
	}
	template <typename T = void> T set_ChargeAwardId3(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E62BC))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardNum3() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E6124))(this);
	}
	template <typename T = void> T set_ChargeAwardNum3(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E62C4))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardCntInBox3() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E62CC))(this);
	}
	template <typename T = void> T set_ChargeAwardCntInBox3(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E62D4))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardAgingTime3() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E612C))(this);
	}
	template <typename T = void> T set_ChargeAwardAgingTime3(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E62DC))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardHighlight3() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E6134))(this);
	}
	template <typename T = void> T set_ChargeAwardHighlight3(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E62E4))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardId4() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E613C))(this);
	}
	template <typename T = void> T set_ChargeAwardId4(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E62EC))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardNum4() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E6144))(this);
	}
	template <typename T = void> T set_ChargeAwardNum4(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E62F4))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardCntInBox4() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E62FC))(this);
	}
	template <typename T = void> T set_ChargeAwardCntInBox4(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6304))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardAgingTime4() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E614C))(this);
	}
	template <typename T = void> T set_ChargeAwardAgingTime4(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E630C))(this, value);
	}
	template <typename T = int32_t> T get_ChargeAwardHighlight4() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E6154))(this);
	}
	template <typename T = void> T set_ChargeAwardHighlight4(int32_t value) {
		return ((T (*)(SpLvConfConfig*, int32_t))(Il2CppBase() + 0x30E6314))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpLvConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E631C))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SpLvConfConfig*))(Il2CppBase() + 0x30E6834))(this);
	}

};

}
