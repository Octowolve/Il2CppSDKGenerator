#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonReader"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& SeqRange1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& SeqRange2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& SeqRange3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& SeqRange4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> T& _reader() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _stack() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _byteBuffer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _charBuffer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& _currentElementType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _bsonReaderState() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& _currentContext() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _readRootValueAsArray() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& _jsonNet35BinaryCompatibility() {
		return *(T*)((uintptr_t)this + 0x6D);
	}
	template <typename T = uintptr_t> T& _dateTimeKindHandling() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uintptr_t> T get_DateTimeKindHandling() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x40891F4))(this);
	}
	template <typename T = Il2CppString*> T ReadElement() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x40891FC))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x40895D8))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x408A0B8))(this);
	}
	template <typename T = bool> T ReadCodeWScope() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x4089E14))(this);
	}
	template <typename T = bool> T ReadReference() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x4089B30))(this);
	}
	template <typename T = bool> T ReadNormal() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x4089898))(this);
	}
	template <typename T = void> T PopContext() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x408AAA4))(this);
	}
	template <typename T = void> T PushContext(uintptr_t newContext) {
		return ((T (*)(BsonReader*, uintptr_t))(Il2CppBase() + 0x408A1F0))(this, newContext);
	}
	template <typename T = unsigned char> T ReadByte() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x408AA64))(this);
	}
	template <typename T = void> T ReadType(uintptr_t type) {
		return ((T (*)(BsonReader*, uintptr_t))(Il2CppBase() + 0x408A2D8))(this, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadBinary(uintptr_t* binaryType) {
		return ((T (*)(BsonReader*, uintptr_t*))(Il2CppBase() + 0x408AC44))(this, binaryType);
	}
	template <typename T = Il2CppString*> T ReadString() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x408925C))(this);
	}
	template <typename T = Il2CppString*> T ReadLengthString() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x408A168))(this);
	}
	template <typename T = Il2CppString*> T GetString(int32_t length) {
		return ((T (*)(BsonReader*, int32_t))(Il2CppBase() + 0x408AECC))(this, length);
	}
	template <typename T = int32_t> T GetLastFullCharStop(int32_t start) {
		return ((T (*)(BsonReader*, int32_t))(Il2CppBase() + 0x408AE24))(this, start);
	}
	template <typename T = int32_t> T BytesInSequence(unsigned char b) {
		return ((T (*)(BsonReader*, unsigned char))(Il2CppBase() + 0x408B258))(this, b);
	}
	template <typename T = void> T EnsureBuffers() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x408ACD4))(this);
	}
	template <typename T = double> T ReadDouble() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x408AC04))(this);
	}
	template <typename T = int32_t> T ReadInt32() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x408A128))(this);
	}
	template <typename T = int64_t> T ReadInt64() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x408AC94))(this);
	}
	template <typename T = uintptr_t> T ReadType_1() {
		return ((T (*)(BsonReader*))(Il2CppBase() + 0x408921C))(this);
	}
	template <typename T = void> T MovePosition(int32_t count) {
		return ((T (*)(BsonReader*, int32_t))(Il2CppBase() + 0x408ABD8))(this, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadBytes(int32_t count) {
		return ((T (*)(BsonReader*, int32_t))(Il2CppBase() + 0x408A294))(this, count);
	}

};

}
