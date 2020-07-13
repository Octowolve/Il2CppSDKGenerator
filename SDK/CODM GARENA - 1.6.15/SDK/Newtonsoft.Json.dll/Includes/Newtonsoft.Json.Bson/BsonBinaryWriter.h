#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonBinaryWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonBinaryWriter"));
	}

	template <typename T = uintptr_t> static T& Encoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _writer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _largeByteBuffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& DateTimeKindHandling() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_DateTimeKindHandling() {
		return ((T (*)(BsonBinaryWriter*))(Il2CppBase() + 0x4086A18))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(BsonBinaryWriter*))(Il2CppBase() + 0x4086A20))(this);
	}
	template <typename T = void> T WriteToken(uintptr_t t) {
		return ((T (*)(BsonBinaryWriter*, uintptr_t))(Il2CppBase() + 0x4086A54))(this, t);
	}
	template <typename T = void> T WriteTokenInternal(uintptr_t t) {
		return ((T (*)(BsonBinaryWriter*, uintptr_t))(Il2CppBase() + 0x4087458))(this, t);
	}
	template <typename T = void> T WriteString(Il2CppString* s, int32_t byteCount, void* calculatedlengthPrefix) {
		return ((T (*)(BsonBinaryWriter*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x4088A88))(this, s, byteCount, calculatedlengthPrefix);
	}
	template <typename T = void> T WriteUtf8Bytes(Il2CppString* s, int32_t byteCount) {
		return ((T (*)(BsonBinaryWriter*, Il2CppString*, int32_t))(Il2CppBase() + 0x4088BC4))(this, s, byteCount);
	}
	template <typename T = int32_t> T CalculateSize(int32_t stringByteCount) {
		return ((T (*)(BsonBinaryWriter*, int32_t))(Il2CppBase() + 0x4088DD4))(this, stringByteCount);
	}
	template <typename T = int32_t> T CalculateSizeWithLength(int32_t stringByteCount, bool includeSize) {
		return ((T (*)(BsonBinaryWriter*, int32_t, bool))(Il2CppBase() + 0x4088DDC))(this, stringByteCount, includeSize);
	}
	template <typename T = int32_t> T CalculateSize_1(uintptr_t t) {
		return ((T (*)(BsonBinaryWriter*, uintptr_t))(Il2CppBase() + 0x4086A78))(this, t);
	}

};

}
