#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class PROTHELPER
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "PROT_HELPER"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& crc16tab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& crc7tab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProtocolCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UTF8BytesToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CRC16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CRC16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CRC7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CRC7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_CRC7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = int32_t> static T GetProtocolCmd(Il2CppArray<uintptr_t>* bytes, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x5080DE8))(0, bytes, index);
	}
	template <typename T = Il2CppString*> static T UTF8BytesToString(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5080F2C))(0, bytes);
	}
	template <typename T = uint16_t> static T CRC16(uint16_t crcIn, Il2CppArray<uintptr_t>* buf) {
		return ((T (*)(void *, uint16_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5081194))(0, crcIn, buf);
	}
	template <typename T = uint16_t> static T CRC16_1(uint16_t crcIn, Il2CppArray<uintptr_t>* buf, int32_t Count) {
		return ((T (*)(void *, uint16_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x508134C))(0, crcIn, buf, Count);
	}
	template <typename T = unsigned char> static T CRC7(unsigned char crcIn, Il2CppArray<uintptr_t>* buf) {
		return ((T (*)(void *, unsigned char, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x508151C))(0, crcIn, buf);
	}
	template <typename T = unsigned char> static T CRC7_1(unsigned char crcIn, Il2CppArray<uintptr_t>* buf, int32_t Count) {
		return ((T (*)(void *, unsigned char, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x508163C))(0, crcIn, buf, Count);
	}
	template <typename T = unsigned char> static T CRC7_2(unsigned char crcIn, Il2CppArray<uintptr_t>* buf, int32_t offset, int32_t Count) {
		return ((T (*)(void *, unsigned char, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x50817FC))(0, crcIn, buf, offset, Count);
	}

};

}
