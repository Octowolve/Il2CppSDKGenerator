#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class AreaItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "AreaItem"));
	}

	template <typename T = uint32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& AreaType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& ShapeType() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& vPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& vExtent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& CreateTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& vDestPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& vDestExtent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint16_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& CustomParam1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint16_t> T& RotationY() {
		return *(T*)((uintptr_t)this + 0x2C);
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
		return ((T (*)(AreaItem*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3332B98))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AreaItem*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3332DC0))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3332FD8))(0, data, DataIndex);
	}

};

}
