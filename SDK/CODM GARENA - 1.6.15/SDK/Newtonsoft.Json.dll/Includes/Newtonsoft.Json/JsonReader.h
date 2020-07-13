#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonReader"));
	}

	template <typename T = uintptr_t> T& _tokenType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = char> T& _quoteChar() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _currentPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _culture() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _dateTimeZoneHandling() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& _maxDepth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _hasExceededMaxDepth() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _dateParseHandling() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _floatParseHandling() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& _dateFormatString() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _stack() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& CloseInput() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& SupportMultipleContent() {
		return *(T*)((uintptr_t)this + 0x4D);
	}

	template <typename T = uintptr_t> T get_CurrentState() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x408A1C8))(this);
	}
	template <typename T = bool> T get_CloseInput() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x408A104))(this);
	}
	template <typename T = void> T set_CloseInput(bool value) {
		return ((T (*)(JsonReader*, bool))(Il2CppBase() + 0x40A64C0))(this, value);
	}
	template <typename T = bool> T get_SupportMultipleContent() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A64C8))(this);
	}
	template <typename T = void> T set_SupportMultipleContent(bool value) {
		return ((T (*)(JsonReader*, bool))(Il2CppBase() + 0x40A64D0))(this, value);
	}
	template <typename T = uintptr_t> T get_DateTimeZoneHandling() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A64D8))(this);
	}
	template <typename T = void> T set_DateTimeZoneHandling(uintptr_t value) {
		return ((T (*)(JsonReader*, uintptr_t))(Il2CppBase() + 0x40A64E0))(this, value);
	}
	template <typename T = uintptr_t> T get_DateParseHandling() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A659C))(this);
	}
	template <typename T = void> T set_DateParseHandling(uintptr_t value) {
		return ((T (*)(JsonReader*, uintptr_t))(Il2CppBase() + 0x40A65A4))(this, value);
	}
	template <typename T = uintptr_t> T get_FloatParseHandling() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A6660))(this);
	}
	template <typename T = void> T set_FloatParseHandling(uintptr_t value) {
		return ((T (*)(JsonReader*, uintptr_t))(Il2CppBase() + 0x40A6668))(this, value);
	}
	template <typename T = Il2CppString*> T get_DateFormatString() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A6724))(this);
	}
	template <typename T = void> T set_DateFormatString(Il2CppString* value) {
		return ((T (*)(JsonReader*, Il2CppString*))(Il2CppBase() + 0x40A672C))(this, value);
	}
	template <typename T = void*> T get_MaxDepth() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A6734))(this);
	}
	template <typename T = void> T set_MaxDepth(void* value) {
		return ((T (*)(JsonReader*, void*))(Il2CppBase() + 0x40A6748))(this, value);
	}
	template <typename T = uintptr_t> T get_TokenType() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A688C))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A6894))(this);
	}
	template <typename T = uintptr_t> T get_ValueType() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A689C))(this);
	}
	template <typename T = int32_t> T get_Depth() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A68B4))(this);
	}
	template <typename T = Il2CppString*> T get_Path() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A6984))(this);
	}
	template <typename T = uintptr_t> T get_Culture() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A6B84))(this);
	}
	template <typename T = void> T set_Culture(uintptr_t value) {
		return ((T (*)(JsonReader*, uintptr_t))(Il2CppBase() + 0x40A6C34))(this, value);
	}
	template <typename T = uintptr_t> T GetPosition(int32_t depth) {
		return ((T (*)(JsonReader*, int32_t))(Il2CppBase() + 0x40A6C3C))(this, depth);
	}
	template <typename T = void> T Push(uintptr_t value) {
		return ((T (*)(JsonReader*, uintptr_t))(Il2CppBase() + 0x40A6D60))(this, value);
	}
	template <typename T = uintptr_t> T Pop() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A7054))(this);
	}
	template <typename T = uintptr_t> T Peek() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A72A8))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T ReadAsInt32() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A72B0))(this);
	}
	template <typename T = void*> T ReadInt32String(Il2CppString* s) {
		return ((T (*)(JsonReader*, Il2CppString*))(Il2CppBase() + 0x40A7A68))(this, s);
	}
	template <typename T = Il2CppString*> T ReadAsString() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A7CE4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadAsBytes() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A81B0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadArrayIntoByteArray() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A8A80))(this);
	}
	template <typename T = void*> T ReadAsDouble() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A8D54))(this);
	}
	template <typename T = void*> T ReadDoubleString(Il2CppString* s) {
		return ((T (*)(JsonReader*, Il2CppString*))(Il2CppBase() + 0x40A91C8))(this, s);
	}
	template <typename T = void*> T ReadAsBoolean() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A9450))(this);
	}
	template <typename T = void*> T ReadBooleanString(Il2CppString* s) {
		return ((T (*)(JsonReader*, Il2CppString*))(Il2CppBase() + 0x40A98AC))(this, s);
	}
	template <typename T = void*> T ReadAsDecimal() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A9B34))(this);
	}
	template <typename T = void*> T ReadDecimalString(Il2CppString* s) {
		return ((T (*)(JsonReader*, Il2CppString*))(Il2CppBase() + 0x40A9FCC))(this, s);
	}
	template <typename T = void*> T ReadAsDateTime() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40AA2A0))(this);
	}
	template <typename T = void*> T ReadDateTimeString(Il2CppString* s) {
		return ((T (*)(JsonReader*, Il2CppString*))(Il2CppBase() + 0x40AA6FC))(this, s);
	}
	template <typename T = void*> T ReadAsDateTimeOffset() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40AAB74))(this);
	}
	template <typename T = void*> T ReadDateTimeOffsetString(Il2CppString* s) {
		return ((T (*)(JsonReader*, Il2CppString*))(Il2CppBase() + 0x40AAFD4))(this, s);
	}
	template <typename T = void> T ReaderReadAndAssert() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A8A44))(this);
	}
	template <typename T = uintptr_t> T CreateUnexpectedEndException() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40AB374))(this);
	}
	template <typename T = void> T ReadIntoWrappedTypeObject() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A8754))(this);
	}
	template <typename T = void> T Skip() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x4091810))(this);
	}
	template <typename T = void> T SetToken(uintptr_t newToken) {
		return ((T (*)(JsonReader*, uintptr_t))(Il2CppBase() + 0x408A098))(this, newToken);
	}
	template <typename T = void> T SetToken_1(uintptr_t newToken, uintptr_t value) {
		return ((T (*)(JsonReader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x408A10C))(this, newToken, value);
	}
	template <typename T = void> T SetToken_2(uintptr_t newToken, uintptr_t value, bool updateIndex) {
		return ((T (*)(JsonReader*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x40A77C4))(this, newToken, value, updateIndex);
	}
	template <typename T = void> T SetPostValueState(bool updateIndex) {
		return ((T (*)(JsonReader*, bool))(Il2CppBase() + 0x40AB588))(this, updateIndex);
	}
	template <typename T = void> T UpdateScopeWithFinishedValue() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A703C))(this);
	}
	template <typename T = void> T ValidateEnd(uintptr_t endToken) {
		return ((T (*)(JsonReader*, uintptr_t))(Il2CppBase() + 0x40AB404))(this, endToken);
	}
	template <typename T = void> T SetStateBasedOnCurrent() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40AB710))(this);
	}
	template <typename T = void> T SetFinished() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40AB5CC))(this);
	}
	template <typename T = uintptr_t> T GetTypeForCloseToken(uintptr_t token) {
		return ((T (*)(JsonReader*, uintptr_t))(Il2CppBase() + 0x40AB5E4))(this, token);
	}
	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40AB888))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(JsonReader*, bool))(Il2CppBase() + 0x40AB8C0))(this, disposing);
	}
	template <typename T = void> T Close() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x408A0F0))(this);
	}
	template <typename T = void> T ReadAndAssert() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x409175C))(this);
	}
	template <typename T = bool> T ReadAndMoveToContent() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40AB8E8))(this);
	}
	template <typename T = bool> T MoveToContent() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40AB920))(this);
	}
	template <typename T = uintptr_t> T GetContentToken() {
		return ((T (*)(JsonReader*))(Il2CppBase() + 0x40A771C))(this);
	}

};

}
