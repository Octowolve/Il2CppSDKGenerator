#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigBitConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigBitConverter"));
	}

	template <typename T = uintptr_t> static T& UTF8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ASCII() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T NullableToString(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4632058))(0, bytes, position);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T NullableToInt16Arr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4632208))(0, bytes, position);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T NullableToInt32Arr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4632470))(0, bytes, position);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T NullableToSingleArr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46326D8))(0, bytes, position);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T NullableToStringArr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4632940))(0, bytes, position);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T NullableToStringList1(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4632C28))(0, bytes, position);
	}
	template <typename T = Il2CppList<int32_t>*> static T NullableToInt32List1(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4632D78))(0, bytes, position);
	}
	template <typename T = void> static T GetBytes(Il2CppArray<uintptr_t>* bytes, uintptr_t position, unsigned char value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, unsigned char))(Il2CppBase() + 0x4632EC8))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_1(Il2CppArray<uintptr_t>* bytes, uintptr_t position, Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4632F18))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_2(Il2CppArray<uintptr_t>* bytes, uintptr_t position, bool value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4632F7C))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_3(Il2CppArray<uintptr_t>* bytes, uintptr_t position, int16_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, int16_t))(Il2CppBase() + 0x4632FCC))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_4(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uint16_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uint16_t))(Il2CppBase() + 0x4633044))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_5(Il2CppArray<uintptr_t>* bytes, uintptr_t position, int32_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x46330FC))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_6(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uint32_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uint32_t))(Il2CppBase() + 0x4633184))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_7(Il2CppArray<uintptr_t>* bytes, uintptr_t position, int64_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, int64_t))(Il2CppBase() + 0x463323C))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_8(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uint64_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uint64_t))(Il2CppBase() + 0x46332E8))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_9(Il2CppArray<uintptr_t>* bytes, uintptr_t position, float value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, float))(Il2CppBase() + 0x46333A8))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_10(Il2CppArray<uintptr_t>* bytes, uintptr_t position, double value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, double))(Il2CppBase() + 0x4633460))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_11(Il2CppArray<uintptr_t>* bytes, uintptr_t position, Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x463351C))(0, bytes, position, value);
	}
	template <typename T = void> static T GetBytes_12(Il2CppArray<uintptr_t>* bytes, uintptr_t position, Il2CppString* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4633588))(0, bytes, position, value);
	}
	template <typename T = unsigned char> static T ToByte(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46336E4))(0, bytes, position);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToBytes(Il2CppArray<uintptr_t>* bytes, uintptr_t position, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x4633730))(0, bytes, position, length);
	}
	template <typename T = bool> static T ToBoolean(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x462C5E0))(0, bytes, position);
	}
	template <typename T = int16_t> static T ToInt16(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4633804))(0, bytes, position);
	}
	template <typename T = uint16_t> static T ToUInt16(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463215C))(0, bytes, position);
	}
	template <typename T = int32_t> static T ToInt32(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x462C3B0))(0, bytes, position);
	}
	template <typename T = uint32_t> static T ToUInt32(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463387C))(0, bytes, position);
	}
	template <typename T = int64_t> static T ToInt64(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4633924))(0, bytes, position);
	}
	template <typename T = uint64_t> static T ToUInt64(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46339C4))(0, bytes, position);
	}
	template <typename T = float> static T ToSingle(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4633A6C))(0, bytes, position);
	}
	template <typename T = double> static T ToDouble(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4633B14))(0, bytes, position);
	}
	template <typename T = Il2CppString*> static T ToString(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x462C434))(0, bytes, position);
	}
	template <typename T = Il2CppString*> static T ASCIIToString(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x462EA08))(0, bytes, position);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToBooleanArr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position, bool dword) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4633BBC))(0, bytes, position, dword);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToByteArr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position, bool dword) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4633D10))(0, bytes, position, dword);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToInt16Arr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position, bool dword) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4632318))(0, bytes, position, dword);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToInt32Arr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position, bool dword) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4632580))(0, bytes, position, dword);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToUInt32Arr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position, bool dword) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4633E64))(0, bytes, position, dword);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToInt64Arr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position, bool dword) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4633FBC))(0, bytes, position, dword);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToUInt64Arr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position, bool dword) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4634114))(0, bytes, position, dword);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToSingleArr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position, bool dword) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x46327E8))(0, bytes, position, dword);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToDoubleArr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position, bool dword) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x463426C))(0, bytes, position, dword);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ToStringArr1(Il2CppArray<uintptr_t>* bytes, uintptr_t position, bool dword) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4632A50))(0, bytes, position, dword);
	}
	template <typename T = uintptr_t> static T ToBooleanArr2(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46343C4))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToByteArr2(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46344F4))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToInt32Arr2(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4634624))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToUInt32Arr2(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4634758))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToInt64Arr2(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463488C))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToUInt64Arr2(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46349C0))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToSingleArr2(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4634AF4))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToDoubleArr2(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4634C28))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToStringArr2(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4634D5C))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToBooleanArr3(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4634F28))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToByteArr3(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4635070))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToInt32Arr3(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46351B8))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToUInt32Arr3(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4635304))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToInt64Arr3(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4635450))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToUInt64Arr3(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463559C))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToSingleArr3(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46356E8))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToDoubleArr3(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4635834))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToStringArr3(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4635980))(0, bytes, position);
	}
	template <typename T = Il2CppVector2> static T ToVector2(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4635BB4))(0, bytes, position);
	}
	template <typename T = Il2CppVector3> static T ToVector3(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4635C90))(0, bytes, position);
	}
	template <typename T = uintptr_t> static T ToVector4(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4635D8C))(0, bytes, position);
	}

};

}
