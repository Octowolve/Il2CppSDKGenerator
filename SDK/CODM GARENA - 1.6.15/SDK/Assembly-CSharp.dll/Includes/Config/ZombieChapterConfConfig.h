#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieChapterConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieChapterConfConfig"));
	}

	template <typename T = uintptr_t> T& Difficulty() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EBGAssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& DifficultyLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ChapterId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ThemeID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& BGAssetID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& PreChapterId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& UnlockConditionType1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& UnlockConditionOperator1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& UnlockConditionValue1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& UnlockConditionType2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& UnlockConditionOperator2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& UnlockConditionValue2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BA80))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BB9C))(this);
	}
	template <typename T = Il2CppString*> T get_DifficultyLevel() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BB8C))(this);
	}
	template <typename T = void> T set_DifficultyLevel(Il2CppString* value) {
		return ((T (*)(ZombieChapterConfConfig*, Il2CppString*))(Il2CppBase() + 0x414BC44))(this, value);
	}
	template <typename T = int32_t> T get_ChapterId() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BC3C))(this);
	}
	template <typename T = void> T set_ChapterId(int32_t value) {
		return ((T (*)(ZombieChapterConfConfig*, int32_t))(Il2CppBase() + 0x414BC4C))(this, value);
	}
	template <typename T = int32_t> T get_ThemeID() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BC54))(this);
	}
	template <typename T = void> T set_ThemeID(int32_t value) {
		return ((T (*)(ZombieChapterConfConfig*, int32_t))(Il2CppBase() + 0x414BC5C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BC64))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ZombieChapterConfConfig*, Il2CppString*))(Il2CppBase() + 0x414BC6C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BC74))(this);
	}
	template <typename T = int32_t> T get_BGAssetID() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BB94))(this);
	}
	template <typename T = void> T set_BGAssetID(int32_t value) {
		return ((T (*)(ZombieChapterConfConfig*, int32_t))(Il2CppBase() + 0x414BC84))(this, value);
	}
	template <typename T = int32_t> T get_PreChapterId() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BC8C))(this);
	}
	template <typename T = void> T set_PreChapterId(int32_t value) {
		return ((T (*)(ZombieChapterConfConfig*, int32_t))(Il2CppBase() + 0x414BC94))(this, value);
	}
	template <typename T = Il2CppString*> T get_UnlockConditionType1() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BC9C))(this);
	}
	template <typename T = void> T set_UnlockConditionType1(Il2CppString* value) {
		return ((T (*)(ZombieChapterConfConfig*, Il2CppString*))(Il2CppBase() + 0x414BCA4))(this, value);
	}
	template <typename T = Il2CppString*> T get_UnlockConditionOperator1() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BCAC))(this);
	}
	template <typename T = void> T set_UnlockConditionOperator1(Il2CppString* value) {
		return ((T (*)(ZombieChapterConfConfig*, Il2CppString*))(Il2CppBase() + 0x414BCB4))(this, value);
	}
	template <typename T = int32_t> T get_UnlockConditionValue1() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BCBC))(this);
	}
	template <typename T = void> T set_UnlockConditionValue1(int32_t value) {
		return ((T (*)(ZombieChapterConfConfig*, int32_t))(Il2CppBase() + 0x414BCC4))(this, value);
	}
	template <typename T = int32_t> T get_UnlockConditionType2() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BCCC))(this);
	}
	template <typename T = void> T set_UnlockConditionType2(int32_t value) {
		return ((T (*)(ZombieChapterConfConfig*, int32_t))(Il2CppBase() + 0x414BCD4))(this, value);
	}
	template <typename T = int32_t> T get_UnlockConditionOperator2() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BCDC))(this);
	}
	template <typename T = void> T set_UnlockConditionOperator2(int32_t value) {
		return ((T (*)(ZombieChapterConfConfig*, int32_t))(Il2CppBase() + 0x414BCE4))(this, value);
	}
	template <typename T = int32_t> T get_UnlockConditionValue2() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BCEC))(this);
	}
	template <typename T = void> T set_UnlockConditionValue2(int32_t value) {
		return ((T (*)(ZombieChapterConfConfig*, int32_t))(Il2CppBase() + 0x414BCF4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieChapterConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x414BCFC))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ZombieChapterConfConfig*))(Il2CppBase() + 0x414BF60))(this);
	}

};

}
