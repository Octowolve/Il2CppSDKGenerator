#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class TraceJsonReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "TraceJsonReader"));
	}

	template <typename T = uintptr_t> T& _innerReader() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _textWriter() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _sw() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppString*> T GetDeserializedJsonMessage() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A615C))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A6190))(this);
	}
	template <typename T = void*> T ReadAsInt32() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A620C))(this);
	}
	template <typename T = Il2CppString*> T ReadAsString() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A6280))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadAsBytes() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A62FC))(this);
	}
	template <typename T = void*> T ReadAsDecimal() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A6378))(this);
	}
	template <typename T = void*> T ReadAsDouble() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A63EC))(this);
	}
	template <typename T = void*> T ReadAsBoolean() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A6460))(this);
	}
	template <typename T = void*> T ReadAsDateTime() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A64DC))(this);
	}
	template <typename T = void*> T ReadAsDateTimeOffset() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A6550))(this);
	}
	template <typename T = int32_t> T get_Depth() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A65C4))(this);
	}
	template <typename T = Il2CppString*> T get_Path() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A65F8))(this);
	}
	template <typename T = uintptr_t> T get_TokenType() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A662C))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A6660))(this);
	}
	template <typename T = uintptr_t> T get_ValueType() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A6694))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A66C8))(this);
	}
	template <typename T = bool> T Newtonsoft_Json_IJsonLineInfo_HasLineInfo() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A66FC))(this);
	}
	template <typename T = int32_t> T Newtonsoft_Json_IJsonLineInfo_get_LineNumber() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A6804))(this);
	}
	template <typename T = int32_t> T Newtonsoft_Json_IJsonLineInfo_get_LinePosition() {
		return ((T (*)(TraceJsonReader*))(Il2CppBase() + 0x39A6910))(this);
	}

};

}
