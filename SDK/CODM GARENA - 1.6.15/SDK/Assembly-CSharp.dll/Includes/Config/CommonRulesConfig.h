#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CommonRulesConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CommonRulesConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& subDataList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& RuleID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RuleTitle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& RankTab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& RankTabChild() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& RuleContent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SubCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& SubTitle_1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& SubContent_1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& SubTitle_2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& SubContent_2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& SubTitle_3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& SubContent_3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& SubTitle_4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& SubContent_4() {
		return *(T*)((uintptr_t)this + 0x44);
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
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CB34))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CEC8))(this);
	}
	template <typename T = int32_t> T get_RuleID() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CF68))(this);
	}
	template <typename T = void> T set_RuleID(int32_t value) {
		return ((T (*)(CommonRulesConfig*, int32_t))(Il2CppBase() + 0x462CF70))(this, value);
	}
	template <typename T = Il2CppString*> T get_RuleTitle() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CF78))(this);
	}
	template <typename T = void> T set_RuleTitle(Il2CppString* value) {
		return ((T (*)(CommonRulesConfig*, Il2CppString*))(Il2CppBase() + 0x462CF80))(this, value);
	}
	template <typename T = int32_t> T get_RankTab() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CF88))(this);
	}
	template <typename T = void> T set_RankTab(int32_t value) {
		return ((T (*)(CommonRulesConfig*, int32_t))(Il2CppBase() + 0x462CF90))(this, value);
	}
	template <typename T = int32_t> T get_RankTabChild() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CF98))(this);
	}
	template <typename T = void> T set_RankTabChild(int32_t value) {
		return ((T (*)(CommonRulesConfig*, int32_t))(Il2CppBase() + 0x462CFA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_RuleContent() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CFA8))(this);
	}
	template <typename T = void> T set_RuleContent(Il2CppString* value) {
		return ((T (*)(CommonRulesConfig*, Il2CppString*))(Il2CppBase() + 0x462CFB0))(this, value);
	}
	template <typename T = int32_t> T get_SubCount() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CDCC))(this);
	}
	template <typename T = void> T set_SubCount(int32_t value) {
		return ((T (*)(CommonRulesConfig*, int32_t))(Il2CppBase() + 0x462CFB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubTitle_1() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CE78))(this);
	}
	template <typename T = void> T set_SubTitle_1(Il2CppString* value) {
		return ((T (*)(CommonRulesConfig*, Il2CppString*))(Il2CppBase() + 0x462CFC0))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubContent_1() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CE88))(this);
	}
	template <typename T = void> T set_SubContent_1(Il2CppString* value) {
		return ((T (*)(CommonRulesConfig*, Il2CppString*))(Il2CppBase() + 0x462CFC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubTitle_2() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CE98))(this);
	}
	template <typename T = void> T set_SubTitle_2(Il2CppString* value) {
		return ((T (*)(CommonRulesConfig*, Il2CppString*))(Il2CppBase() + 0x462CFD0))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubContent_2() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CEA0))(this);
	}
	template <typename T = void> T set_SubContent_2(Il2CppString* value) {
		return ((T (*)(CommonRulesConfig*, Il2CppString*))(Il2CppBase() + 0x462CFD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubTitle_3() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CEA8))(this);
	}
	template <typename T = void> T set_SubTitle_3(Il2CppString* value) {
		return ((T (*)(CommonRulesConfig*, Il2CppString*))(Il2CppBase() + 0x462CFE0))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubContent_3() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CEB0))(this);
	}
	template <typename T = void> T set_SubContent_3(Il2CppString* value) {
		return ((T (*)(CommonRulesConfig*, Il2CppString*))(Il2CppBase() + 0x462CFE8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubTitle_4() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CEB8))(this);
	}
	template <typename T = void> T set_SubTitle_4(Il2CppString* value) {
		return ((T (*)(CommonRulesConfig*, Il2CppString*))(Il2CppBase() + 0x462CFF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubContent_4() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462CEC0))(this);
	}
	template <typename T = void> T set_SubContent_4(Il2CppString* value) {
		return ((T (*)(CommonRulesConfig*, Il2CppString*))(Il2CppBase() + 0x462CFF8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CommonRulesConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x462D000))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(CommonRulesConfig*))(Il2CppBase() + 0x462D1D8))(this);
	}

};

}
