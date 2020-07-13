#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class ZipExtraData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "ZipExtraData"));
	}

	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _readValueStart() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _readValueLength() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _newEntry() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _data() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetEntryData() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x4A817A8))(this);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x4A819B4))(this);
	}
	template <typename T = uintptr_t> T GetData() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x335A54C))(this);
	}
	template <typename T = int32_t> T get_ValueLength() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x4A8111C))(this);
	}
	template <typename T = int32_t> T get_CurrentReadIndex() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x4A819D8))(this);
	}
	template <typename T = bool> T Find(int32_t headerID) {
		return ((T (*)(ZipExtraData*, int32_t))(Il2CppBase() + 0x4A81058))(this, headerID);
	}
	template <typename T = void> T AddEntry(int32_t headerID, Il2CppArray<uintptr_t>* fieldData) {
		return ((T (*)(ZipExtraData*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A81B18))(this, headerID, fieldData);
	}
	template <typename T = void> T StartNewEntry() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x4A81F64))(this);
	}
	template <typename T = void> T AddNewEntry(int32_t headerID) {
		return ((T (*)(ZipExtraData*, int32_t))(Il2CppBase() + 0x4A81FF4))(this, headerID);
	}
	template <typename T = void> T AddData(unsigned char data) {
		return ((T (*)(ZipExtraData*, unsigned char))(Il2CppBase() + 0x4A82048))(this, data);
	}
	template <typename T = void> T AddLeShort(int32_t toAdd) {
		return ((T (*)(ZipExtraData*, int32_t))(Il2CppBase() + 0x4A8207C))(this, toAdd);
	}
	template <typename T = void> T AddLeInt(int32_t toAdd) {
		return ((T (*)(ZipExtraData*, int32_t))(Il2CppBase() + 0x4A820DC))(this, toAdd);
	}
	template <typename T = void> T AddLeLong(int64_t toAdd) {
		return ((T (*)(ZipExtraData*, int64_t))(Il2CppBase() + 0x4A82104))(this, toAdd);
	}
	template <typename T = bool> T Delete(int32_t headerID) {
		return ((T (*)(ZipExtraData*, int32_t))(Il2CppBase() + 0x4A81D90))(this, headerID);
	}
	template <typename T = int64_t> T ReadLong() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x4A81124))(this);
	}
	template <typename T = int32_t> T ReadInt() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x4A822A4))(this);
	}
	template <typename T = int32_t> T ReadShort() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x4A815A0))(this);
	}
	template <typename T = int32_t> T ReadByte() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x4A81634))(this);
	}
	template <typename T = void> T ReadCheck(int32_t length) {
		return ((T (*)(ZipExtraData*, int32_t))(Il2CppBase() + 0x4A82148))(this, length);
	}
	template <typename T = int32_t> T ReadShortInternal() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x4A819E0))(this);
	}
	template <typename T = void> T SetShort(uintptr_t index, int32_t source) {
		return ((T (*)(ZipExtraData*, uintptr_t, int32_t))(Il2CppBase() + 0x4A81ED4))(this, index, source);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ZipExtraData*))(Il2CppBase() + 0x4A823A8))(this);
	}

};

}
