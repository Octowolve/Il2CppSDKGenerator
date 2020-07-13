#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JToken"));
	}

	template <typename T = uintptr_t> static T& _equalityComparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _parent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _previous() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _next() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _annotations() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& BooleanTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& NumberTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& StringTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& GuidTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& TimeSpanTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& UriTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& CharTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& DateTimeTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& BytesTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_Parent() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x39680A4))(this);
	}
	template <typename T = void> T set_Parent(uintptr_t value) {
		return ((T (*)(JToken*, uintptr_t))(Il2CppBase() + 0x396828C))(this, value);
	}
	template <typename T = uintptr_t> T get_Root() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3968294))(this);
	}
	template <typename T = uintptr_t> T CloneToken() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T DeepEquals(uintptr_t node) {
		return ((T (*)(JToken*, uintptr_t))(Il2CppBase() + 0x0))(this, node);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_HasValues() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> static T DeepEquals_1(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x39682C0))(0, t1, t2);
	}
	template <typename T = uintptr_t> T get_Next() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x39680AC))(this);
	}
	template <typename T = void> T set_Next(uintptr_t value) {
		return ((T (*)(JToken*, uintptr_t))(Il2CppBase() + 0x3968304))(this, value);
	}
	template <typename T = uintptr_t> T get_Previous() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x396830C))(this);
	}
	template <typename T = void> T set_Previous(uintptr_t value) {
		return ((T (*)(JToken*, uintptr_t))(Il2CppBase() + 0x3968314))(this, value);
	}
	template <typename T = Il2CppString*> T get_Path() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x396831C))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(JToken*, uintptr_t))(Il2CppBase() + 0x3968740))(this, key);
	}
	template <typename T = uintptr_t> T get_First() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3968860))(this);
	}
	template <typename T = uintptr_t> T get_Last() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3968980))(this);
	}
	template <typename T = void*> T Children() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3968AA0))(this);
	}
	template <typename T = void> T Remove() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3968B50))(this);
	}
	template <typename T = void> T Replace(uintptr_t value) {
		return ((T (*)(JToken*, uintptr_t))(Il2CppBase() + 0x3968C20))(this, value);
	}
	template <typename T = void> T WriteTo(uintptr_t writer, Il2CppArray<uintptr_t>* converters) {
		return ((T (*)(JToken*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, writer, converters);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3968CF8))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t formatting, Il2CppArray<uintptr_t>* converters) {
		return ((T (*)(JToken*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3968D98))(this, formatting, converters);
	}
	template <typename T = uintptr_t> static T EnsureValue(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3968FE4))(0, value);
	}
	template <typename T = Il2CppString*> static T GetType(uintptr_t token) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3969180))(0, token);
	}
	template <typename T = bool> static T ValidateToken(uintptr_t o, Il2CppArray<uintptr_t>* validTypes, bool nullable) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x39692FC))(0, o, validTypes, nullable);
	}
	template <typename T = bool> static T op_Explicit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3969410))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_1(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39696A4))(0, value);
	}
	template <typename T = void*> static T op_Explicit_2(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3969B7C))(0, value);
	}
	template <typename T = int64_t> static T op_Explicit_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3969EC8))(0, value);
	}
	template <typename T = void*> static T op_Explicit_4(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396A15C))(0, value);
	}
	template <typename T = void*> static T op_Explicit_5(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396A57C))(0, value);
	}
	template <typename T = void*> static T op_Explicit_6(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396AB9C))(0, value);
	}
	template <typename T = void*> static T op_Explicit_7(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396AF14))(0, value);
	}
	template <typename T = void*> static T op_Explicit_8(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396B26C))(0, value);
	}
	template <typename T = int32_t> static T op_Explicit_9(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396B5B4))(0, value);
	}
	template <typename T = int16_t> static T op_Explicit_10(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396B848))(0, value);
	}
	template <typename T = uint16_t> static T op_Explicit_11(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396BADC))(0, value);
	}
	template <typename T = char> static T op_Explicit_12(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396BD70))(0, value);
	}
	template <typename T = unsigned char> static T op_Explicit_13(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396C004))(0, value);
	}
	template <typename T = signed char> static T op_Explicit_14(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396C298))(0, value);
	}
	template <typename T = void*> static T op_Explicit_15(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396C52C))(0, value);
	}
	template <typename T = void*> static T op_Explicit_16(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396C880))(0, value);
	}
	template <typename T = void*> static T op_Explicit_17(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396CBC8))(0, value);
	}
	template <typename T = void*> static T op_Explicit_18(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396CF10))(0, value);
	}
	template <typename T = void*> static T op_Explicit_19(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396D25C))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_20(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396D5A8))(0, value);
	}
	template <typename T = void*> static T op_Explicit_21(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396D8C0))(0, value);
	}
	template <typename T = void*> static T op_Explicit_22(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396DC18))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_23(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396DF6C))(0, value);
	}
	template <typename T = void*> static T op_Explicit_24(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396E20C))(0, value);
	}
	template <typename T = void*> static T op_Explicit_25(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396E560))(0, value);
	}
	template <typename T = double> static T op_Explicit_26(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396E8B8))(0, value);
	}
	template <typename T = float> static T op_Explicit_27(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396EB4C))(0, value);
	}
	template <typename T = Il2CppString*> static T op_Explicit_28(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396EDE0))(0, value);
	}
	template <typename T = uint32_t> static T op_Explicit_29(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396F124))(0, value);
	}
	template <typename T = uint64_t> static T op_Explicit_30(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396F3B8))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_31(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396F64C))(0, value);
	}
	template <typename T = void*> static T op_Explicit_32(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396F9AC))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_33(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x396FE20))(0, value);
	}
	template <typename T = void*> static T op_Explicit_34(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3970150))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_35(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3970530))(0, value);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x397085C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableNewtonsoft_Json_Linq_JToken_GetEnumerator() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3970938))(this);
	}
	template <typename T = int32_t> T GetDeepHashCode() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T CreateReader() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x39709E4))(this);
	}
	template <typename T = uintptr_t> T ToObject(uintptr_t objectType) {
		return ((T (*)(JToken*, uintptr_t))(Il2CppBase() + 0x3970B14))(this, objectType);
	}
	template <typename T = uintptr_t> T ToObject_1(uintptr_t objectType, uintptr_t jsonSerializer) {
		return ((T (*)(JToken*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3971EA8))(this, objectType, jsonSerializer);
	}
	template <typename T = uintptr_t> static T ReadFrom(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3972054))(0, reader);
	}
	template <typename T = uintptr_t> static T ReadFrom_1(uintptr_t reader, uintptr_t settings) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x39720F8))(0, reader, settings);
	}
	template <typename T = void> T SetLineInfo(uintptr_t lineInfo, uintptr_t settings) {
		return ((T (*)(JToken*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3972578))(this, lineInfo, settings);
	}
	template <typename T = void> T SetLineInfo_1(int32_t lineNumber, int32_t linePosition) {
		return ((T (*)(JToken*, int32_t, int32_t))(Il2CppBase() + 0x397294C))(this, lineNumber, linePosition);
	}
	template <typename T = bool> T Newtonsoft_Json_IJsonLineInfo_HasLineInfo() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3972D34))(this);
	}
	template <typename T = int32_t> T Newtonsoft_Json_IJsonLineInfo_get_LineNumber() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3972DC0))(this);
	}
	template <typename T = int32_t> T Newtonsoft_Json_IJsonLineInfo_get_LinePosition() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3972E54))(this);
	}
	template <typename T = uintptr_t> T System_ICloneable_Clone() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3972EE8))(this);
	}
	template <typename T = uintptr_t> T DeepClone() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x3972EF8))(this);
	}
	template <typename T = void> T AddAnnotation(uintptr_t annotation) {
		return ((T (*)(JToken*, uintptr_t))(Il2CppBase() + 0x3972A1C))(this, annotation);
	}
	template <typename T = uintptr_t> T Annotation() {
		return ((T (*)(JToken*))(Il2CppBase() + 0x335B388))(this);
	}

};

}
