#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class RelevantInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "RelevantInfo"));
	}

	template <typename T = uint32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& FaceYaw() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& FacePitch() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = unsigned char> T& FaceRoll() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = unsigned char> T& RelevantObjType() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(RelevantInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4F98220))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(RelevantInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4F983BC))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4F98550))(0, data, DataIndex);
	}

};

}
