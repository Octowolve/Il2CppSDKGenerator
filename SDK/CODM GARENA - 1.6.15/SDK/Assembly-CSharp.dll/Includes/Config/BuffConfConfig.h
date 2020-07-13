#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BuffConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BuffConfConfig"));
	}

	template <typename T = uintptr_t> T& ECombineAddType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ECombineRemoveType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EConditionType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& EEffectType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& EffectOperator1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& EffectOperator2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BuffProperty() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_FloatEffectParam1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_DynamicEffectParam2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& s_effectTypeDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& Buff_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& TPIgnore() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& IsDeBuff() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Group() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Power() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& Coexist() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& CombineAddType() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& CombineRemoveType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& CombineNum() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& MaxApplyTimes() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& AIValid() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& CD() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& RespawnRetain() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& ConditionType() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& ConditionOperator() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& ConditionParam() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& CondCheckType1() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& CondCheckOperator1() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& CondCheckParam1() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& CondCheckType2() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& CondCheckOperator2() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& CondCheckParam2() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& Probability() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& CycleTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& RemoveConditionType() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& RemoveConditionOperator() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& RemoveConditionParam() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& TriggerSoundEvent() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& TriggerOverSoundEvent() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& IsUserBuffer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& BuffLevel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& EffectType() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& EffectLocName() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& EffectConfig() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& EffectParam1() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& EffectParam1Operator() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& EffectParam2() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppString*> T& EffectParam2Operator() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& EffectParam3() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> T& EffectParam3Operator() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& EffectParam4() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppString*> T& EffectParam4Operator() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& EffectParam5() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> T& EffectParam5Operator() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& IsDeleteSubBuff() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& IsEffectShow() {
		return *(T*)((uintptr_t)this + 0xED);
	}
	template <typename T = Il2CppString*> T& ShowEventType() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& IsCdEffectBefore() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& IsCycleEffectBefore() {
		return *(T*)((uintptr_t)this + 0xF5);
	}
	template <typename T = bool> T& IsDelayRemove() {
		return *(T*)((uintptr_t)this + 0xF6);
	}
	template <typename T = int32_t> T& DelayRemoveTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& IsInvalidWithDying() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyPropertyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPropertyValue2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBuffValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCombineAddType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCombineRemoveType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConditionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEffectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_ECombineAddType() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D58194))(this);
	}
	template <typename T = void> T set_ECombineAddType(uintptr_t value) {
		return ((T (*)(BuffConfConfig*, uintptr_t))(Il2CppBase() + 0x2D5819C))(this, value);
	}
	template <typename T = uintptr_t> T get_ECombineRemoveType() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D581A4))(this);
	}
	template <typename T = void> T set_ECombineRemoveType(uintptr_t value) {
		return ((T (*)(BuffConfConfig*, uintptr_t))(Il2CppBase() + 0x2D581AC))(this, value);
	}
	template <typename T = uintptr_t> T get_EConditionType() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D581B4))(this);
	}
	template <typename T = void> T set_EConditionType(uintptr_t value) {
		return ((T (*)(BuffConfConfig*, uintptr_t))(Il2CppBase() + 0x2D581BC))(this, value);
	}
	template <typename T = uintptr_t> T get_EEffectType() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D581C4))(this);
	}
	template <typename T = void> T set_EEffectType(uintptr_t value) {
		return ((T (*)(BuffConfConfig*, uintptr_t))(Il2CppBase() + 0x2D581CC))(this, value);
	}
	template <typename T = uintptr_t> T get_EffectOperator1() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D581D4))(this);
	}
	template <typename T = void> T set_EffectOperator1(uintptr_t value) {
		return ((T (*)(BuffConfConfig*, uintptr_t))(Il2CppBase() + 0x2D581DC))(this, value);
	}
	template <typename T = uintptr_t> T get_EffectOperator2() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D581E4))(this);
	}
	template <typename T = void> T set_EffectOperator2(uintptr_t value) {
		return ((T (*)(BuffConfConfig*, uintptr_t))(Il2CppBase() + 0x2D581EC))(this, value);
	}
	template <typename T = float> T get_FloatEffectParam1() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D581F4))(this);
	}
	template <typename T = float> T get_DynamicEffectParam2() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D581FC))(this);
	}
	template <typename T = float> T get_FloatEffectParam3() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D58204))(this);
	}
	template <typename T = float> T get_FloatEffectParam4() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D582F0))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D583DC))(this);
	}
	template <typename T = void> T ModifyPropertyValue(Il2CppString* propertyValue) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D58B70))(this, propertyValue);
	}
	template <typename T = void> T SetPropertyValue2(Il2CppString* propertyValue2) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D58C80))(this, propertyValue2);
	}
	template <typename T = void> static T UpdateBuffValue(int32_t buffID, Il2CppString* propertyValue, Il2CppString* propertyValue2) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2D58D88))(0, buffID, propertyValue, propertyValue2);
	}
	template <typename T = uintptr_t> T GetCombineAddType(Il2CppString* content) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D58604))(this, content);
	}
	template <typename T = uintptr_t> T GetCombineRemoveType(Il2CppString* content) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D58744))(this, content);
	}
	template <typename T = uintptr_t> T GetConditionType(Il2CppString* content) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D58884))(this, content);
	}
	template <typename T = uintptr_t> T GetEffectType(Il2CppString* content) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D589E4))(this, content);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D58EFC))(this);
	}
	template <typename T = int32_t> T get_Buff_id() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D58FCC))(this);
	}
	template <typename T = void> T set_Buff_id(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D58FD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D58FDC))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D58FE4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D58FEC))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D58FF4))(this, value);
	}
	template <typename T = int32_t> T get_TPIgnore() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D58FFC))(this);
	}
	template <typename T = void> T set_TPIgnore(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D59004))(this, value);
	}
	template <typename T = bool> T get_IsDeBuff() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5900C))(this);
	}
	template <typename T = void> T set_IsDeBuff(bool value) {
		return ((T (*)(BuffConfConfig*, bool))(Il2CppBase() + 0x2D59014))(this, value);
	}
	template <typename T = int32_t> T get_Group() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5901C))(this);
	}
	template <typename T = void> T set_Group(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D59024))(this, value);
	}
	template <typename T = int32_t> T get_Power() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5902C))(this);
	}
	template <typename T = void> T set_Power(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D59034))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5903C))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D59044))(this, value);
	}
	template <typename T = bool> T get_Coexist() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5904C))(this);
	}
	template <typename T = void> T set_Coexist(bool value) {
		return ((T (*)(BuffConfConfig*, bool))(Il2CppBase() + 0x2D59054))(this, value);
	}
	template <typename T = Il2CppString*> T get_CombineAddType() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D585FC))(this);
	}
	template <typename T = void> T set_CombineAddType(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5905C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CombineRemoveType() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5873C))(this);
	}
	template <typename T = void> T set_CombineRemoveType(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D59064))(this, value);
	}
	template <typename T = int32_t> T get_CombineNum() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5906C))(this);
	}
	template <typename T = void> T set_CombineNum(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D59074))(this, value);
	}
	template <typename T = int32_t> T get_MaxApplyTimes() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5907C))(this);
	}
	template <typename T = void> T set_MaxApplyTimes(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D59084))(this, value);
	}
	template <typename T = Il2CppString*> T get_AIValid() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5908C))(this);
	}
	template <typename T = void> T set_AIValid(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D59094))(this, value);
	}
	template <typename T = int32_t> T get_CD() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5909C))(this);
	}
	template <typename T = void> T set_CD(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D590A4))(this, value);
	}
	template <typename T = int32_t> T get_RespawnRetain() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D590AC))(this);
	}
	template <typename T = void> T set_RespawnRetain(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D590B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ConditionType() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5887C))(this);
	}
	template <typename T = void> T set_ConditionType(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D590BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ConditionOperator() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D590C4))(this);
	}
	template <typename T = void> T set_ConditionOperator(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D590CC))(this, value);
	}
	template <typename T = float> T get_ConditionParam() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D590D4))(this);
	}
	template <typename T = void> T set_ConditionParam(float value) {
		return ((T (*)(BuffConfConfig*, float))(Il2CppBase() + 0x2D590DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondCheckType1() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D590E4))(this);
	}
	template <typename T = void> T set_CondCheckType1(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D590EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondCheckOperator1() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D590F4))(this);
	}
	template <typename T = void> T set_CondCheckOperator1(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D590FC))(this, value);
	}
	template <typename T = float> T get_CondCheckParam1() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D59104))(this);
	}
	template <typename T = void> T set_CondCheckParam1(float value) {
		return ((T (*)(BuffConfConfig*, float))(Il2CppBase() + 0x2D5910C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondCheckType2() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D59114))(this);
	}
	template <typename T = void> T set_CondCheckType2(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5911C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CondCheckOperator2() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D59124))(this);
	}
	template <typename T = void> T set_CondCheckOperator2(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5912C))(this, value);
	}
	template <typename T = float> T get_CondCheckParam2() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D59134))(this);
	}
	template <typename T = void> T set_CondCheckParam2(float value) {
		return ((T (*)(BuffConfConfig*, float))(Il2CppBase() + 0x2D5913C))(this, value);
	}
	template <typename T = float> T get_Probability() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D59144))(this);
	}
	template <typename T = void> T set_Probability(float value) {
		return ((T (*)(BuffConfConfig*, float))(Il2CppBase() + 0x2D5914C))(this, value);
	}
	template <typename T = int32_t> T get_CycleTime() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D59154))(this);
	}
	template <typename T = void> T set_CycleTime(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D5915C))(this, value);
	}
	template <typename T = Il2CppString*> T get_RemoveConditionType() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D59164))(this);
	}
	template <typename T = void> T set_RemoveConditionType(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5916C))(this, value);
	}
	template <typename T = Il2CppString*> T get_RemoveConditionOperator() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D59174))(this);
	}
	template <typename T = void> T set_RemoveConditionOperator(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5917C))(this, value);
	}
	template <typename T = int32_t> T get_RemoveConditionParam() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D59184))(this);
	}
	template <typename T = void> T set_RemoveConditionParam(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D5918C))(this, value);
	}
	template <typename T = Il2CppString*> T get_TriggerSoundEvent() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D59194))(this);
	}
	template <typename T = void> T set_TriggerSoundEvent(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5919C))(this, value);
	}
	template <typename T = Il2CppString*> T get_TriggerOverSoundEvent() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D591A4))(this);
	}
	template <typename T = void> T set_TriggerOverSoundEvent(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D591AC))(this, value);
	}
	template <typename T = bool> T get_IsUserBuffer() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D591B4))(this);
	}
	template <typename T = void> T set_IsUserBuffer(bool value) {
		return ((T (*)(BuffConfConfig*, bool))(Il2CppBase() + 0x2D591BC))(this, value);
	}
	template <typename T = int32_t> T get_BuffLevel() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D591C4))(this);
	}
	template <typename T = void> T set_BuffLevel(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D591CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectType() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D589DC))(this);
	}
	template <typename T = void> T set_EffectType(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D591D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectLocName() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D591DC))(this);
	}
	template <typename T = void> T set_EffectLocName(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D591E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectConfig() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D591EC))(this);
	}
	template <typename T = void> T set_EffectConfig(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D591F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam1() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D58B60))(this);
	}
	template <typename T = void> T set_EffectParam1(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D591FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam1Operator() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D58B50))(this);
	}
	template <typename T = void> T set_EffectParam1Operator(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D59204))(this, value);
	}
	template <typename T = float> T get_EffectParam2() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D58B68))(this);
	}
	template <typename T = void> T set_EffectParam2(float value) {
		return ((T (*)(BuffConfConfig*, float))(Il2CppBase() + 0x2D5920C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam2Operator() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D58B58))(this);
	}
	template <typename T = void> T set_EffectParam2Operator(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D59214))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam3() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D582E8))(this);
	}
	template <typename T = void> T set_EffectParam3(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5921C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam3Operator() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D59224))(this);
	}
	template <typename T = void> T set_EffectParam3Operator(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5922C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam4() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D583D4))(this);
	}
	template <typename T = void> T set_EffectParam4(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D59234))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam4Operator() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5923C))(this);
	}
	template <typename T = void> T set_EffectParam4Operator(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D59244))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam5() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5924C))(this);
	}
	template <typename T = void> T set_EffectParam5(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D59254))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParam5Operator() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5925C))(this);
	}
	template <typename T = void> T set_EffectParam5Operator(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D59264))(this, value);
	}
	template <typename T = bool> T get_IsDeleteSubBuff() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5926C))(this);
	}
	template <typename T = void> T set_IsDeleteSubBuff(bool value) {
		return ((T (*)(BuffConfConfig*, bool))(Il2CppBase() + 0x2D59274))(this, value);
	}
	template <typename T = bool> T get_IsEffectShow() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5927C))(this);
	}
	template <typename T = void> T set_IsEffectShow(bool value) {
		return ((T (*)(BuffConfConfig*, bool))(Il2CppBase() + 0x2D59284))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShowEventType() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5928C))(this);
	}
	template <typename T = void> T set_ShowEventType(Il2CppString* value) {
		return ((T (*)(BuffConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D59294))(this, value);
	}
	template <typename T = bool> T get_IsCdEffectBefore() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5929C))(this);
	}
	template <typename T = void> T set_IsCdEffectBefore(bool value) {
		return ((T (*)(BuffConfConfig*, bool))(Il2CppBase() + 0x2D592A4))(this, value);
	}
	template <typename T = bool> T get_IsCycleEffectBefore() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D592AC))(this);
	}
	template <typename T = void> T set_IsCycleEffectBefore(bool value) {
		return ((T (*)(BuffConfConfig*, bool))(Il2CppBase() + 0x2D592B4))(this, value);
	}
	template <typename T = bool> T get_IsDelayRemove() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D592BC))(this);
	}
	template <typename T = void> T set_IsDelayRemove(bool value) {
		return ((T (*)(BuffConfConfig*, bool))(Il2CppBase() + 0x2D592C4))(this, value);
	}
	template <typename T = int32_t> T get_DelayRemoveTime() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D592CC))(this);
	}
	template <typename T = void> T set_DelayRemoveTime(int32_t value) {
		return ((T (*)(BuffConfConfig*, int32_t))(Il2CppBase() + 0x2D592D4))(this, value);
	}
	template <typename T = bool> T get_IsInvalidWithDying() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D592DC))(this);
	}
	template <typename T = void> T set_IsInvalidWithDying(bool value) {
		return ((T (*)(BuffConfConfig*, bool))(Il2CppBase() + 0x2D592E4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BuffConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D592EC))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(BuffConfConfig*))(Il2CppBase() + 0x2D5A118))(this);
	}

};

}
