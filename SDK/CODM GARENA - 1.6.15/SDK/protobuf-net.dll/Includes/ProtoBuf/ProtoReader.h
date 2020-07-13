#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class ProtoReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "ProtoReader"));
	}

	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ioBuffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& model() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& fieldNumber() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& depth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& dataRemaining() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ioIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& available() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& blockEnd() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& wireType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isFixedLength() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& internStrings() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uintptr_t> T& netCache() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& trapCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& stringInterner() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& encoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyBlob() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& lastReader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_FieldNumber() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x5069878))(this);
	}
	template <typename T = uintptr_t> T get_WireType() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x505D430))(this);
	}
	template <typename T = void> static T Init(uintptr_t reader, uintptr_t source, uintptr_t model, uintptr_t context, int32_t length) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x5069950))(0, reader, source, model, context, length);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x5069C78))(this);
	}
	template <typename T = int32_t> T TryReadUInt32VariantWithoutMoving(bool trimNegative, uintptr_t* value) {
		return ((T (*)(ProtoReader*, bool, uintptr_t*))(Il2CppBase() + 0x5069D64))(this, trimNegative, value);
	}
	template <typename T = uint32_t> T ReadUInt32Variant(bool trimNegative) {
		return ((T (*)(ProtoReader*, bool))(Il2CppBase() + 0x506A52C))(this, trimNegative);
	}
	template <typename T = bool> T TryReadUInt32Variant(uintptr_t* value) {
		return ((T (*)(ProtoReader*, uintptr_t*))(Il2CppBase() + 0x506A628))(this, value);
	}
	template <typename T = uint32_t> T ReadUInt32() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x505E8C4))(this);
	}
	template <typename T = void> T Ensure(int32_t count, bool strict) {
		return ((T (*)(ProtoReader*, int32_t, bool))(Il2CppBase() + 0x506A1BC))(this, count, strict);
	}
	template <typename T = int16_t> T ReadInt16() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x5068170))(this);
	}
	template <typename T = uint16_t> T ReadUInt16() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x50681B0))(this);
	}
	template <typename T = unsigned char> T ReadByte() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x50682E4))(this);
	}
	template <typename T = signed char> T ReadSByte() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x50682A4))(this);
	}
	template <typename T = int32_t> T ReadInt32() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x505D5D4))(this);
	}
	template <typename T = int32_t> static T Zag(uint32_t ziggedValue) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x506A700))(0, ziggedValue);
	}
	template <typename T = int64_t> static T Zag_1(uint64_t ziggedValue) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x506A710))(0, ziggedValue);
	}
	template <typename T = int64_t> T ReadInt64() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x505D8CC))(this);
	}
	template <typename T = int32_t> T TryReadUInt64VariantWithoutMoving(uintptr_t* value) {
		return ((T (*)(ProtoReader*, uintptr_t*))(Il2CppBase() + 0x506A82C))(this, value);
	}
	template <typename T = uint64_t> T ReadUInt64Variant() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x506A734))(this);
	}
	template <typename T = Il2CppString*> T Intern(Il2CppString* value) {
		return ((T (*)(ProtoReader*, Il2CppString*))(Il2CppBase() + 0x506AD88))(this, value);
	}
	template <typename T = Il2CppString*> T ReadString() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x5068680))(this);
	}
	template <typename T = void> T ThrowEnumException(uintptr_t type, int32_t value) {
		return ((T (*)(ProtoReader*, uintptr_t, int32_t))(Il2CppBase() + 0x506AF28))(this, type, value);
	}
	template <typename T = uintptr_t> T CreateWireTypeException() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x506A67C))(this);
	}
	template <typename T = uintptr_t> T CreateException(Il2CppString* message) {
		return ((T (*)(ProtoReader*, Il2CppString*))(Il2CppBase() + 0x506B0C4))(this, message);
	}
	template <typename T = double> T ReadDouble() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x5068324))(this);
	}
	template <typename T = void> static T EndSubItem(uintptr_t token, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x505E17C))(0, token, reader);
	}
	template <typename T = uintptr_t> static T StartSubItem(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x505D438))(0, reader);
	}
	template <typename T = int32_t> T ReadFieldHeader() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x505DF90))(this);
	}
	template <typename T = bool> T TryReadFieldHeader(int32_t field) {
		return ((T (*)(ProtoReader*, int32_t))(Il2CppBase() + 0x506B190))(this, field);
	}
	template <typename T = void> T Hint(uintptr_t wireType) {
		return ((T (*)(ProtoReader*, uintptr_t))(Il2CppBase() + 0x5068154))(this, wireType);
	}
	template <typename T = void> T Assert(uintptr_t wireType) {
		return ((T (*)(ProtoReader*, uintptr_t))(Il2CppBase() + 0x505D894))(this, wireType);
	}
	template <typename T = void> T SkipField() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x505DCC8))(this);
	}
	template <typename T = uint64_t> T ReadUInt64() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x505E590))(this);
	}
	template <typename T = float> T ReadSingle() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x5068444))(this);
	}
	template <typename T = bool> T ReadBoolean() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x50681F0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T AppendBytes(Il2CppArray<uintptr_t>* value, uintptr_t reader) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x5068828))(0, value, reader);
	}
	template <typename T = void> static T Seek(uintptr_t source, int32_t count, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506B238))(0, source, count, buffer);
	}
	template <typename T = uintptr_t> static T AddErrorData(uintptr_t exception, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x5067D20))(0, exception, source);
	}
	template <typename T = uintptr_t> static T EoF(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x506A468))(0, source);
	}
	template <typename T = void> T AppendExtensionData(uintptr_t instance) {
		return ((T (*)(ProtoReader*, uintptr_t))(Il2CppBase() + 0x506B52C))(this, instance);
	}
	template <typename T = void> T AppendExtensionField(uintptr_t writer) {
		return ((T (*)(ProtoReader*, uintptr_t))(Il2CppBase() + 0x506B92C))(this, writer);
	}
	template <typename T = bool> static T HasSubValue(uintptr_t wireType, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x506BC94))(0, wireType, source);
	}
	template <typename T = void> T SetRootObject(uintptr_t value) {
		return ((T (*)(ProtoReader*, uintptr_t))(Il2CppBase() + 0x5064CF0))(this, value);
	}
	template <typename T = void> static T NoteObject(uintptr_t value, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x506BD70))(0, value, reader);
	}
	template <typename T = void> T CheckFullyConsumed() {
		return ((T (*)(ProtoReader*))(Il2CppBase() + 0x5064E78))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t source, uintptr_t model, uintptr_t context, int32_t len) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x5064BCC))(0, source, model, context, len);
	}
	template <typename T = uintptr_t> static T GetRecycled() {
		return ((T (*)(void *))(Il2CppBase() + 0x506BE64))(0);
	}
	template <typename T = void> static T Recycle(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5064F78))(0, reader);
	}

};

}
