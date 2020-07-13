#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LevelInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LevelInfoConfig"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Level_exp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Level_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Level_feedback_sound() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTotalExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_LevelType() {
		return ((T (*)(LevelInfoConfig*))(Il2CppBase() + 0x376F7E8))(this);
	}
	template <typename T = int32_t> static T GetMaxLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x376F7F0))(0);
	}
	template <typename T = int32_t> static T GetTotalExp(int32_t level) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x376F954))(0, level);
	}
	template <typename T = int32_t> static T GetLevelNum(int32_t totalexp, int32_t curlevel) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x376FAB4))(0, totalexp, curlevel);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(LevelInfoConfig*))(Il2CppBase() + 0x376FC34))(this);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(LevelInfoConfig*))(Il2CppBase() + 0x376F94C))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(LevelInfoConfig*, int32_t))(Il2CppBase() + 0x376FCD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(LevelInfoConfig*))(Il2CppBase() + 0x376FCDC))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(LevelInfoConfig*, Il2CppString*))(Il2CppBase() + 0x376FCE4))(this, value);
	}
	template <typename T = int32_t> T get_Level_exp() {
		return ((T (*)(LevelInfoConfig*))(Il2CppBase() + 0x376F944))(this);
	}
	template <typename T = void> T set_Level_exp(int32_t value) {
		return ((T (*)(LevelInfoConfig*, int32_t))(Il2CppBase() + 0x376FCEC))(this, value);
	}
	template <typename T = int32_t> T get_Level_time() {
		return ((T (*)(LevelInfoConfig*))(Il2CppBase() + 0x376FCF4))(this);
	}
	template <typename T = void> T set_Level_time(int32_t value) {
		return ((T (*)(LevelInfoConfig*, int32_t))(Il2CppBase() + 0x376FCFC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(LevelInfoConfig*))(Il2CppBase() + 0x376FD04))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(LevelInfoConfig*, Il2CppString*))(Il2CppBase() + 0x376FD0C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Level_feedback_sound() {
		return ((T (*)(LevelInfoConfig*))(Il2CppBase() + 0x376FD14))(this);
	}
	template <typename T = void> T set_Level_feedback_sound(Il2CppString* value) {
		return ((T (*)(LevelInfoConfig*, Il2CppString*))(Il2CppBase() + 0x376FD1C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LevelInfoConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376FD24))(this, bytes, position);
	}

};

}
