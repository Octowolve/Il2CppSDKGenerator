#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpSuperBoxTaskConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpSuperBoxTaskConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& AwardList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& SeasonId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& BoxId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& OpenCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& AwardId1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& AwardNum1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& AwardAgingTime1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& AwardId2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& AwardNum2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& AwardAgingTime2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& AwardId3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& AwardNum3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& AwardAgingTime3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& AwardId4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& AwardNum4() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& AwardAgingTime4() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAwardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetShowItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E8368))(this);
	}
	template <typename T = void> T AddAwardConfig(int32_t id, int32_t num, Il2CppString* time) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x30E8534))(this, id, num, time);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTargetShowItemData() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E86D8))(this);
	}
	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E8950))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E8958))(this, value);
	}
	template <typename T = int32_t> T get_BoxId() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E8960))(this);
	}
	template <typename T = void> T set_BoxId(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E8968))(this, value);
	}
	template <typename T = int32_t> T get_OpenCount() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E8970))(this);
	}
	template <typename T = void> T set_OpenCount(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E8978))(this, value);
	}
	template <typename T = int32_t> T get_AwardId1() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E851C))(this);
	}
	template <typename T = void> T set_AwardId1(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E8980))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum1() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E8524))(this);
	}
	template <typename T = void> T set_AwardNum1(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E8988))(this, value);
	}
	template <typename T = int32_t> T get_AwardAgingTime1() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E852C))(this);
	}
	template <typename T = void> T set_AwardAgingTime1(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E8990))(this, value);
	}
	template <typename T = int32_t> T get_AwardId2() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E8690))(this);
	}
	template <typename T = void> T set_AwardId2(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E8998))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum2() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E8698))(this);
	}
	template <typename T = void> T set_AwardNum2(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E89A0))(this, value);
	}
	template <typename T = int32_t> T get_AwardAgingTime2() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E86A0))(this);
	}
	template <typename T = void> T set_AwardAgingTime2(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E89A8))(this, value);
	}
	template <typename T = int32_t> T get_AwardId3() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E86A8))(this);
	}
	template <typename T = void> T set_AwardId3(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E89B0))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum3() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E86B0))(this);
	}
	template <typename T = void> T set_AwardNum3(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E89B8))(this, value);
	}
	template <typename T = int32_t> T get_AwardAgingTime3() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E86B8))(this);
	}
	template <typename T = void> T set_AwardAgingTime3(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E89C0))(this, value);
	}
	template <typename T = int32_t> T get_AwardId4() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E86C0))(this);
	}
	template <typename T = void> T set_AwardId4(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E89C8))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum4() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E86C8))(this);
	}
	template <typename T = void> T set_AwardNum4(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E89D0))(this, value);
	}
	template <typename T = int32_t> T get_AwardAgingTime4() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E86D0))(this);
	}
	template <typename T = void> T set_AwardAgingTime4(int32_t value) {
		return ((T (*)(SpSuperBoxTaskConfig*, int32_t))(Il2CppBase() + 0x30E89D8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpSuperBoxTaskConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E89E0))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SpSuperBoxTaskConfig*))(Il2CppBase() + 0x30E8C40))(this);
	}

};

}
