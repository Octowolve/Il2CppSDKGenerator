#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class Regex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "Regex"));
	}

	template <typename T = uintptr_t> static T& cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& machineFactory() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mapping() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& group_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& gap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& group_names() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& group_numbers() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& pattern() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& roptions() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Regex*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ADC72C))(this, info, context);
	}
	template <typename T = bool> static T IsMatch(Il2CppString* input, Il2CppString* pattern) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4ADC8C4))(0, input, pattern);
	}
	template <typename T = bool> static T IsMatch_1(Il2CppString* input, Il2CppString* pattern, uintptr_t options) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4ADC978))(0, input, pattern, options);
	}
	template <typename T = uintptr_t> static T Match(Il2CppString* input, Il2CppString* pattern) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4ADCA74))(0, input, pattern);
	}
	template <typename T = uintptr_t> static T Match_1(Il2CppString* input, Il2CppString* pattern, uintptr_t options) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4ADCB28))(0, input, pattern, options);
	}
	template <typename T = Il2CppString*> static T Replace(Il2CppString* input, Il2CppString* pattern, Il2CppString* replacement) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4ADCC24))(0, input, pattern, replacement);
	}
	template <typename T = Il2CppString*> static T Replace_1(Il2CppString* input, Il2CppString* pattern, Il2CppString* replacement, uintptr_t options) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4ADCCE4))(0, input, pattern, replacement, options);
	}
	template <typename T = void> static T validate_options(uintptr_t options) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4ADC16C))(0, options);
	}
	template <typename T = void> T Init() {
		return ((T (*)(Regex*))(Il2CppBase() + 0x4ADC254))(this);
	}
	template <typename T = void> T InitNewRegex() {
		return ((T (*)(Regex*))(Il2CppBase() + 0x4ADCDFC))(this);
	}
	template <typename T = uintptr_t> static T CreateMachineFactory(Il2CppString* pattern, uintptr_t options) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4ADD10C))(0, pattern, options);
	}
	template <typename T = uintptr_t> T get_Options() {
		return ((T (*)(Regex*))(Il2CppBase() + 0x4ADC8BC))(this);
	}
	template <typename T = bool> T get_RightToLeft() {
		return ((T (*)(Regex*))(Il2CppBase() + 0x4ADA018))(this);
	}
	template <typename T = int32_t> T GroupNumberFromName(Il2CppString* name) {
		return ((T (*)(Regex*, Il2CppString*))(Il2CppBase() + 0x4AD41FC))(this, name);
	}
	template <typename T = int32_t> T GetGroupIndex(int32_t number) {
		return ((T (*)(Regex*, int32_t))(Il2CppBase() + 0x4AD3F4C))(this, number);
	}
	template <typename T = int32_t> T default_startat(Il2CppString* input) {
		return ((T (*)(Regex*, Il2CppString*))(Il2CppBase() + 0x4ADE1A0))(this, input);
	}
	template <typename T = bool> T IsMatch_2(Il2CppString* input) {
		return ((T (*)(Regex*, Il2CppString*))(Il2CppBase() + 0x4ADCA30))(this, input);
	}
	template <typename T = bool> T IsMatch_3(Il2CppString* input, int32_t startat) {
		return ((T (*)(Regex*, Il2CppString*, int32_t))(Il2CppBase() + 0x4ADE1C4))(this, input, startat);
	}
	template <typename T = uintptr_t> T Match_2(Il2CppString* input) {
		return ((T (*)(Regex*, Il2CppString*))(Il2CppBase() + 0x4ADCBE0))(this, input);
	}
	template <typename T = uintptr_t> T Match_3(Il2CppString* input, int32_t startat) {
		return ((T (*)(Regex*, Il2CppString*, int32_t))(Il2CppBase() + 0x4ADE1E8))(this, input, startat);
	}
	template <typename T = uintptr_t> T Matches(Il2CppString* input) {
		return ((T (*)(Regex*, Il2CppString*))(Il2CppBase() + 0x4ADE4C4))(this, input);
	}
	template <typename T = uintptr_t> T Matches_1(Il2CppString* input, int32_t startat) {
		return ((T (*)(Regex*, Il2CppString*, int32_t))(Il2CppBase() + 0x4ADE508))(this, input, startat);
	}
	template <typename T = Il2CppString*> T Replace_2(Il2CppString* input, uintptr_t evaluator) {
		return ((T (*)(Regex*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4ADE5B4))(this, input, evaluator);
	}
	template <typename T = Il2CppString*> T Replace_3(Il2CppString* input, uintptr_t evaluator, int32_t count, int32_t startat) {
		return ((T (*)(Regex*, Il2CppString*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4ADE60C))(this, input, evaluator, count, startat);
	}
	template <typename T = Il2CppString*> T Replace_4(Il2CppString* input, Il2CppString* replacement) {
		return ((T (*)(Regex*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4ADCDA4))(this, input, replacement);
	}
	template <typename T = Il2CppString*> T Replace_5(Il2CppString* input, Il2CppString* replacement, int32_t count, int32_t startat) {
		return ((T (*)(Regex*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4ADE8D8))(this, input, replacement, count, startat);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Split(Il2CppString* input) {
		return ((T (*)(Regex*, Il2CppString*))(Il2CppBase() + 0x4ADEB24))(this, input);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Split_1(Il2CppString* input, int32_t count, int32_t startat) {
		return ((T (*)(Regex*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4ADEB74))(this, input, count, startat);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Regex*))(Il2CppBase() + 0x4ADED84))(this);
	}
	template <typename T = int32_t> T get_GroupCount() {
		return ((T (*)(Regex*))(Il2CppBase() + 0x4ADED8C))(this);
	}
	template <typename T = int32_t> T get_Gap() {
		return ((T (*)(Regex*))(Il2CppBase() + 0x4AD9DA8))(this);
	}
	template <typename T = uintptr_t> T CreateMachine() {
		return ((T (*)(Regex*))(Il2CppBase() + 0x4ADE3D0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetGroupNamesArray(int32_t groupCount, uintptr_t mapping) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4ADDAC8))(0, groupCount, mapping);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_GroupNumbers() {
		return ((T (*)(Regex*))(Il2CppBase() + 0x4ADE01C))(this);
	}

};

}
