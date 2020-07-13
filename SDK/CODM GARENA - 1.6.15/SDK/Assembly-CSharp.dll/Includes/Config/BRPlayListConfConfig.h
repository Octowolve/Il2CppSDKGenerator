#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRPlayListConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRPlayListConfConfig"));
	}

	template <typename T = int32_t> T& PlaylistID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MapId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PlaylistImageResource() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PlaylistImageResourceCDN() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SquadTeam() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& DoubleTeam() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SingleTeam() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& TPPCamera() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& FPPCamera() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& NumofPlayer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& NumofPlayerDesc() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& AutoFill() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_PlaylistID() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51EE0))(this);
	}
	template <typename T = void> T set_PlaylistID(int32_t value) {
		return ((T (*)(BRPlayListConfConfig*, int32_t))(Il2CppBase() + 0x2D51EE8))(this, value);
	}
	template <typename T = int32_t> T get_MapId() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51EF0))(this);
	}
	template <typename T = void> T set_MapId(int32_t value) {
		return ((T (*)(BRPlayListConfConfig*, int32_t))(Il2CppBase() + 0x2D51EF8))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistImageResource() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51F00))(this);
	}
	template <typename T = void> T set_PlaylistImageResource(Il2CppString* value) {
		return ((T (*)(BRPlayListConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D51F08))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistImageResourceCDN() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51F10))(this);
	}
	template <typename T = void> T set_PlaylistImageResourceCDN(Il2CppString* value) {
		return ((T (*)(BRPlayListConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D51F18))(this, value);
	}
	template <typename T = int32_t> T get_SquadTeam() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51F20))(this);
	}
	template <typename T = void> T set_SquadTeam(int32_t value) {
		return ((T (*)(BRPlayListConfConfig*, int32_t))(Il2CppBase() + 0x2D51F28))(this, value);
	}
	template <typename T = int32_t> T get_DoubleTeam() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51F30))(this);
	}
	template <typename T = void> T set_DoubleTeam(int32_t value) {
		return ((T (*)(BRPlayListConfConfig*, int32_t))(Il2CppBase() + 0x2D51F38))(this, value);
	}
	template <typename T = int32_t> T get_SingleTeam() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51F40))(this);
	}
	template <typename T = void> T set_SingleTeam(int32_t value) {
		return ((T (*)(BRPlayListConfConfig*, int32_t))(Il2CppBase() + 0x2D51F48))(this, value);
	}
	template <typename T = int32_t> T get_TPPCamera() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51F50))(this);
	}
	template <typename T = void> T set_TPPCamera(int32_t value) {
		return ((T (*)(BRPlayListConfConfig*, int32_t))(Il2CppBase() + 0x2D51F58))(this, value);
	}
	template <typename T = int32_t> T get_FPPCamera() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51F60))(this);
	}
	template <typename T = void> T set_FPPCamera(int32_t value) {
		return ((T (*)(BRPlayListConfConfig*, int32_t))(Il2CppBase() + 0x2D51F68))(this, value);
	}
	template <typename T = int32_t> T get_NumofPlayer() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51F70))(this);
	}
	template <typename T = void> T set_NumofPlayer(int32_t value) {
		return ((T (*)(BRPlayListConfConfig*, int32_t))(Il2CppBase() + 0x2D51F78))(this, value);
	}
	template <typename T = Il2CppString*> T get_NumofPlayerDesc() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51F80))(this);
	}
	template <typename T = void> T set_NumofPlayerDesc(Il2CppString* value) {
		return ((T (*)(BRPlayListConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D51F88))(this, value);
	}
	template <typename T = int32_t> T get_AutoFill() {
		return ((T (*)(BRPlayListConfConfig*))(Il2CppBase() + 0x2D51F90))(this);
	}
	template <typename T = void> T set_AutoFill(int32_t value) {
		return ((T (*)(BRPlayListConfConfig*, int32_t))(Il2CppBase() + 0x2D51F98))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRPlayListConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D51FA0))(this, bytes, position);
	}

};

}
