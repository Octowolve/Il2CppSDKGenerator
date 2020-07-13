#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class ProtoWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "ProtoWriter"));
	}

	template <typename T = uintptr_t> T& dest() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& model() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& netCache() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& fieldNumber() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& flushLock() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& wireType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& depth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& recursionStack() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ioBuffer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ioIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& encoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& packedFieldNumber() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T get_NetCache() {
		return ((T (*)(ProtoWriter*))(Il2CppBase() + 0x506C010))(this);
	}
	template <typename T = uintptr_t> T get_WireType() {
		return ((T (*)(ProtoWriter*))(Il2CppBase() + 0x505B1D0))(this);
	}
	template <typename T = void> static T WriteFieldHeader(int32_t fieldNumber, uintptr_t wireType, uintptr_t writer) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x505B28C))(0, fieldNumber, wireType, writer);
	}
	template <typename T = void> static T WriteHeaderCore(int32_t fieldNumber, uintptr_t wireType, uintptr_t writer) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x506C018))(0, fieldNumber, wireType, writer);
	}
	template <typename T = void> static T WriteBytes(Il2CppArray<uintptr_t>* data, uintptr_t writer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x5063E10))(0, data, writer);
	}
	template <typename T = void> static T WriteBytes_1(Il2CppArray<uintptr_t>* data, int32_t offset, int32_t length, uintptr_t writer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x505F454))(0, data, offset, length, writer);
	}
	template <typename T = void> static T CopyRawFromStream(uintptr_t source, uintptr_t writer) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x506C42C))(0, source, writer);
	}
	template <typename T = void> static T IncrementedAndReset(int32_t length, uintptr_t writer) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x506C3F0))(0, length, writer);
	}
	template <typename T = uintptr_t> static T StartSubItem(uintptr_t instance, uintptr_t writer) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x505B1D8))(0, instance, writer);
	}
	template <typename T = void> T CheckRecursionStackAndPush(uintptr_t instance) {
		return ((T (*)(ProtoWriter*, uintptr_t))(Il2CppBase() + 0x506C910))(this, instance);
	}
	template <typename T = void> T PopRecursionStack() {
		return ((T (*)(ProtoWriter*))(Il2CppBase() + 0x506CAF0))(this);
	}
	template <typename T = uintptr_t> static T StartSubItem_1(uintptr_t instance, uintptr_t writer, bool allowFixed) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x506C678))(0, instance, writer, allowFixed);
	}
	template <typename T = void> static T EndSubItem(uintptr_t token, uintptr_t writer) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x505C3C0))(0, token, writer);
	}
	template <typename T = void> static T EndSubItem_1(uintptr_t token, uintptr_t writer, uintptr_t style) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x506CB18))(0, token, writer, style);
	}
	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ProtoWriter*))(Il2CppBase() + 0x506D190))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ProtoWriter*))(Il2CppBase() + 0x506D194))(this);
	}
	template <typename T = void> static T DemandSpace(int32_t required, uintptr_t writer) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x506C298))(0, required, writer);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ProtoWriter*))(Il2CppBase() + 0x50647B8))(this);
	}
	template <typename T = void> static T Flush(uintptr_t writer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x506C224))(0, writer);
	}
	template <typename T = void> static T WriteUInt32Variant(uint32_t value, uintptr_t writer) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x506C0C8))(0, value, writer);
	}
	template <typename T = uint32_t> static T Zig(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x506D294))(0, value);
	}
	template <typename T = uint64_t> static T Zig_1(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x506D2A0))(0, value);
	}
	template <typename T = void> static T WriteUInt64Variant(uint64_t value, uintptr_t writer) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x506D2B4))(0, value, writer);
	}
	template <typename T = void> static T WriteString(Il2CppString* value, uintptr_t writer) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x5063B68))(0, value, writer);
	}
	template <typename T = void> static T WriteUInt64(uint64_t value, uintptr_t writer) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x505EDE0))(0, value, writer);
	}
	template <typename T = void> static T WriteInt64(int64_t value, uintptr_t writer) {
		return ((T (*)(void *, int64_t, uintptr_t))(Il2CppBase() + 0x505B8A0))(0, value, writer);
	}
	template <typename T = void> static T WriteUInt32(uint32_t value, uintptr_t writer) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x505F020))(0, value, writer);
	}
	template <typename T = void> static T WriteInt16(int16_t value, uintptr_t writer) {
		return ((T (*)(void *, int16_t, uintptr_t))(Il2CppBase() + 0x50632F8))(0, value, writer);
	}
	template <typename T = void> static T WriteUInt16(uint16_t value, uintptr_t writer) {
		return ((T (*)(void *, uint16_t, uintptr_t))(Il2CppBase() + 0x50633A0))(0, value, writer);
	}
	template <typename T = void> static T WriteByte(unsigned char value, uintptr_t writer) {
		return ((T (*)(void *, unsigned char, uintptr_t))(Il2CppBase() + 0x5063598))(0, value, writer);
	}
	template <typename T = void> static T WriteSByte(signed char value, uintptr_t writer) {
		return ((T (*)(void *, signed char, uintptr_t))(Il2CppBase() + 0x50634F0))(0, value, writer);
	}
	template <typename T = void> static T WriteInt32ToBuffer(int32_t value, Il2CppArray<uintptr_t>* buffer, int32_t index) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x506D0DC))(0, value, buffer, index);
	}
	template <typename T = void> static T WriteInt32(int32_t value, uintptr_t writer) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x505BE74))(0, value, writer);
	}
	template <typename T = void> static T WriteDouble(double value, uintptr_t writer) {
		return ((T (*)(void *, double, uintptr_t))(Il2CppBase() + 0x5063640))(0, value, writer);
	}
	template <typename T = void> static T WriteSingle(float value, uintptr_t writer) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x5063948))(0, value, writer);
	}
	template <typename T = void> static T ThrowEnumException(uintptr_t writer, uintptr_t enumValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x506D418))(0, writer, enumValue);
	}
	template <typename T = uintptr_t> static T CreateException(uintptr_t writer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5063138))(0, writer);
	}
	template <typename T = void> static T WriteBoolean(bool value, uintptr_t writer) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x5063448))(0, value, writer);
	}
	template <typename T = void> static T AppendExtensionData(uintptr_t instance, uintptr_t writer) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x506D674))(0, instance, writer);
	}
	template <typename T = void> T SetRootObject(uintptr_t value) {
		return ((T (*)(ProtoWriter*, uintptr_t))(Il2CppBase() + 0x5064788))(this, value);
	}

};

}
