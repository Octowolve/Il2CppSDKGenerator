#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ScoreConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ScoreConfigConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Score_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Gamemode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Score() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Score_desc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Info() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LocId_ScoreDesc() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsBuffAddScore() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ScoreCategory() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& ScoreCategory_desc() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ScoreConfigConfig*))(Il2CppBase() + 0x30DCF58))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(ScoreConfigConfig*))(Il2CppBase() + 0x30DCFF8))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(ScoreConfigConfig*, int32_t))(Il2CppBase() + 0x30DD000))(this, value);
	}
	template <typename T = int32_t> T get_Score_type() {
		return ((T (*)(ScoreConfigConfig*))(Il2CppBase() + 0x30DD008))(this);
	}
	template <typename T = void> T set_Score_type(int32_t value) {
		return ((T (*)(ScoreConfigConfig*, int32_t))(Il2CppBase() + 0x30DD010))(this, value);
	}
	template <typename T = int32_t> T get_Gamemode() {
		return ((T (*)(ScoreConfigConfig*))(Il2CppBase() + 0x30DD018))(this);
	}
	template <typename T = void> T set_Gamemode(int32_t value) {
		return ((T (*)(ScoreConfigConfig*, int32_t))(Il2CppBase() + 0x30DD020))(this, value);
	}
	template <typename T = int32_t> T get_Score() {
		return ((T (*)(ScoreConfigConfig*))(Il2CppBase() + 0x30DD028))(this);
	}
	template <typename T = void> T set_Score(int32_t value) {
		return ((T (*)(ScoreConfigConfig*, int32_t))(Il2CppBase() + 0x30DD030))(this, value);
	}
	template <typename T = Il2CppString*> T get_Score_desc() {
		return ((T (*)(ScoreConfigConfig*))(Il2CppBase() + 0x30DD038))(this);
	}
	template <typename T = void> T set_Score_desc(Il2CppString* value) {
		return ((T (*)(ScoreConfigConfig*, Il2CppString*))(Il2CppBase() + 0x30DD040))(this, value);
	}
	template <typename T = Il2CppString*> T get_Info() {
		return ((T (*)(ScoreConfigConfig*))(Il2CppBase() + 0x30DD048))(this);
	}
	template <typename T = void> T set_Info(Il2CppString* value) {
		return ((T (*)(ScoreConfigConfig*, Il2CppString*))(Il2CppBase() + 0x30DD050))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocId_ScoreDesc() {
		return ((T (*)(ScoreConfigConfig*))(Il2CppBase() + 0x30DD058))(this);
	}
	template <typename T = void> T set_LocId_ScoreDesc(Il2CppString* value) {
		return ((T (*)(ScoreConfigConfig*, Il2CppString*))(Il2CppBase() + 0x30DD060))(this, value);
	}
	template <typename T = bool> T get_IsBuffAddScore() {
		return ((T (*)(ScoreConfigConfig*))(Il2CppBase() + 0x30DD068))(this);
	}
	template <typename T = void> T set_IsBuffAddScore(bool value) {
		return ((T (*)(ScoreConfigConfig*, bool))(Il2CppBase() + 0x30DD070))(this, value);
	}
	template <typename T = int32_t> T get_ScoreCategory() {
		return ((T (*)(ScoreConfigConfig*))(Il2CppBase() + 0x30DD078))(this);
	}
	template <typename T = void> T set_ScoreCategory(int32_t value) {
		return ((T (*)(ScoreConfigConfig*, int32_t))(Il2CppBase() + 0x30DD080))(this, value);
	}
	template <typename T = Il2CppString*> T get_ScoreCategory_desc() {
		return ((T (*)(ScoreConfigConfig*))(Il2CppBase() + 0x30DD088))(this);
	}
	template <typename T = void> T set_ScoreCategory_desc(Il2CppString* value) {
		return ((T (*)(ScoreConfigConfig*, Il2CppString*))(Il2CppBase() + 0x30DD090))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ScoreConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DD098))(this, bytes, position);
	}

};

}
