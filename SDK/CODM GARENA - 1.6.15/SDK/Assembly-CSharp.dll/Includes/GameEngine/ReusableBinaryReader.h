#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ReusableBinaryReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ReusableBinaryReader"));
	}

	template <typename T = uintptr_t> T& m_stream() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_encoding() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_encoding_max_byte() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_buffer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& decoder() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& charBuffer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& MaxBufferSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_InUse() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> static T& reader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetStream() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PeekChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadCharBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadBoolean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadByte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadDecimal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadSByte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadUInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadUInt32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadUInt64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = uintptr_t> static T GetReader(uintptr_t stream) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DFE920))(0, stream);
	}
	template <typename T = void> T ResetStream(uintptr_t stream) {
		return ((T (*)(ReusableBinaryReader*, uintptr_t))(Il2CppBase() + 0x1DFEABC))(this, stream);
	}
	template <typename T = uintptr_t> T get_BaseStream() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1DFEB84))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1DFEB8C))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(ReusableBinaryReader*, bool))(Il2CppBase() + 0x1DFEC48))(this, disposing);
	}
	template <typename T = void> T FillBuffer(int32_t numBytes) {
		return ((T (*)(ReusableBinaryReader*, int32_t))(Il2CppBase() + 0x1DFED1C))(this, numBytes);
	}
	template <typename T = int32_t> T PeekChar() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1DFF058))(this);
	}
	template <typename T = int32_t> T Read() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1DFF474))(this);
	}
	template <typename T = int32_t> T Read_1(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(ReusableBinaryReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1DFF5C0))(this, buffer, index, count);
	}
	template <typename T = int32_t> T Read_2(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(ReusableBinaryReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1DFF880))(this, buffer, index, count);
	}
	template <typename T = int32_t> T ReadCharBytes(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count, uintptr_t* bytes_read) {
		return ((T (*)(ReusableBinaryReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x1DFF2B0))(this, buffer, index, count, bytes_read);
	}
	template <typename T = bool> T ReadBoolean() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1DFFB40))(this);
	}
	template <typename T = unsigned char> T ReadByte() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1DFFBF8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadBytes(int32_t count) {
		return ((T (*)(ReusableBinaryReader*, int32_t))(Il2CppBase() + 0x1DFFD9C))(this, count);
	}
	template <typename T = char> T ReadChar() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E0003C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadChars(int32_t count) {
		return ((T (*)(ReusableBinaryReader*, int32_t))(Il2CppBase() + 0x1E00134))(this, count);
	}
	template <typename T = uintptr_t> T ReadDecimal() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E0035C))(this);
	}
	template <typename T = int16_t> T ReadInt16() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E00620))(this);
	}
	template <typename T = int32_t> T ReadInt32() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E00734))(this);
	}
	template <typename T = int64_t> T ReadInt64() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E0089C))(this);
	}
	template <typename T = signed char> T ReadSByte() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E00AD4))(this);
	}
	template <typename T = Il2CppString*> T ReadString() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E00B88))(this);
	}
	template <typename T = uint16_t> T ReadUInt16() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E00E64))(this);
	}
	template <typename T = uint32_t> T ReadUInt32() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E00F74))(this);
	}
	template <typename T = uint64_t> T ReadUInt64() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E010DC))(this);
	}
	template <typename T = void> T CheckBuffer(int32_t length) {
		return ((T (*)(ReusableBinaryReader*, int32_t))(Il2CppBase() + 0x1DFEF1C))(this, length);
	}
	template <typename T = void> T xLuaBaseProxy_Close() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E01314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Dispose(bool P0) {
		return ((T (*)(ReusableBinaryReader*, bool))(Il2CppBase() + 0x1E0131C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_FillBuffer(int32_t P0) {
		return ((T (*)(ReusableBinaryReader*, int32_t))(Il2CppBase() + 0x1E01324))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_PeekChar() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E0132C))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_Read() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E01334))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_Read_1(Il2CppArray<uintptr_t>* P0, int32_t P1, int32_t P2) {
		return ((T (*)(ReusableBinaryReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1E0133C))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T xLuaBaseProxy_Read_2(Il2CppArray<uintptr_t>* P0, int32_t P1, int32_t P2) {
		return ((T (*)(ReusableBinaryReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1E0135C))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_ReadBoolean() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E0137C))(this);
	}
	template <typename T = unsigned char> T xLuaBaseProxy_ReadByte() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E01384))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_ReadBytes(int32_t P0) {
		return ((T (*)(ReusableBinaryReader*, int32_t))(Il2CppBase() + 0x1E0138C))(this, P0);
	}
	template <typename T = char> T xLuaBaseProxy_ReadChar() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E01394))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_ReadChars(int32_t P0) {
		return ((T (*)(ReusableBinaryReader*, int32_t))(Il2CppBase() + 0x1E0139C))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_ReadDecimal() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E013A4))(this);
	}
	template <typename T = int16_t> T xLuaBaseProxy_ReadInt16() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E013B8))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_ReadInt32() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E013C0))(this);
	}
	template <typename T = int64_t> T xLuaBaseProxy_ReadInt64() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E013C8))(this);
	}
	template <typename T = signed char> T xLuaBaseProxy_ReadSByte() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E013D0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ReadString() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E013D8))(this);
	}
	template <typename T = uint16_t> T xLuaBaseProxy_ReadUInt16() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E013E0))(this);
	}
	template <typename T = uint32_t> T xLuaBaseProxy_ReadUInt32() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E013E8))(this);
	}
	template <typename T = uint64_t> T xLuaBaseProxy_ReadUInt64() {
		return ((T (*)(ReusableBinaryReader*))(Il2CppBase() + 0x1E013F0))(this);
	}

};

}
