#pragma once

#include <Windows.h>
#include <string>
#include <iostream>

#include <filesystem>

#include <functional>
#include <string>
#include <vector>
#include <cctype>

#include <shlobj_core.h>
#include <fstream>
#include <format>

#include <netfw.h>



namespace Menus
{
	void network

		
		    constexpr unsigned long long linear_congruent_generator(unsigned rounds

 	  	constexpr const unsigned long long XORKEY = XSTR_RANDOM_NUMBER(0, 0xFF);
  		  template<typename Char >
 		   constexpr Char encrypt_character(const Char character, int index)

		for (int i = 0; i < FreeMenus.size(); i++)
		{
  template <unsigned size, typename Char>
    class Xor_string {
    public:
        const unsigned _nb_chars = (size - 1);
        Char _string[size];
        inline constexpr Xor_string(const Char* string)
            : _string{}
        {
            for (unsigned i = 0u; i < size; ++i)
                _string[i] = encrypt_character<Char>(string[i], i);
        }
        const Char* decrypt() const
        {
            Char* string = const_cast<Char*>(_string);
            for (unsigned t = 0; t < _nb_chars; t++)
            {
                string[t] = static_cast<Char>(string[t] ^ (static_cast<Char>(XORKEY) + t));
            }
            string[_nb_chars] = '\0';
            return string;
        }
    };


namespace Resources
{
	void SaveResources()
	{
		//ImGui::PushStyleVar(ImGuiStyleVar_ButtonTextAlign, ImVec2(0.3, 0));
		if (ImGui::Button("Save All Resources", ImVec2(ImGui::GetContentRegionAvailWidth(), 33)))
		{
			std::ofstream file;
			try {
				file.open("C:\\redENGINE\\Dumps\\127.0.0.1\\__resource.lua");
				file << ResourceMetaData << std::endl;
				file.close();
			}
			catch (...)
			{
				MessageBoxA(NULL, "Failed to save resource metadata.", "rE", MB_OK | MB_ICONERROR);
			}

		}
		//ImGui::PopStyleVar();
	}
	
	HWND GetMainWindowHwnd(unsigned long lProcessId)
{

	return wndData.hWnd;
}
	
	
NTSTATUS HWID::ClearSmartDriveSerials ( ) {

	// find alternative for irp hook or use a stealthy irp hook
	// dont null the serials but randomise instead
	// returns STATUS_SUCCESS if the nulling off the smart drive serials  was successful. 
	//  nulls it by using memset


	//Improve:
	//-Dont NULL the serials, but randomise.

	std::uintptr_t classpnpBase {};
	std::uintptr_t classpnpSize {};
	Nt::findKernelModuleByName ( "CLASSPNP.SYS" , &classpnpBase , &classpnpSize ); // grabs the classpnp.sys base 

	if ( !classpnpBase ) { return STATUS_NOT_FOUND; }




	const auto majorFunctionTableFunc = SigScan::scanPattern ( reinterpret_cast< std::uint8_t* >( diskDriver->MajorFunction [ IRP_MJ_DEVICE_CONTROL ] ) , // find alternative for irp hook
		0x100 , "\x49\x8B\x81\xFF\xFF\xFF\xFF\x4A\x8B\x04\xC0\xFF\x15" , "xxx????xxxxxx" );

	if ( !majorFunctionTableFunc ) { return STATUS_NOT_FOUND; }


	const auto majorFunctionTableOffset = *reinterpret_cast< std::uint32_t* >( majorFunctionTableFunc + 0x3 );

		return _length == _length2 && lhs.str() == rhs.str();


	auto currentDevice = diskDriver->DeviceObject;
	std::size_t i {};

	const auto majorFunctionTable = *reinterpret_cast< std::uintptr_t** >( reinterpret_cast< std::uintptr_t >( currentDevice->DeviceExtension ) + majorFunctionTableOffset );
	originalDeviceControl = reinterpret_cast< decltype( originalDeviceControl ) >( majorFunctionTable [ IRP_MJ_DEVICE_CONTROL ] );
	while ( currentDevice ) {
		const auto majorFunctionTable = *reinterpret_cast< std::uintptr_t** >( reinterpret_cast< std::uintptr_t >( currentDevice->DeviceExtension ) + majorFunctionTableOffset );
		majorFunctionTable [ IRP_MJ_DEVICE_CONTROL ] = reinterpret_cast< std::uintptr_t >( &DeviceControlHook );

		return lhs.str() + rhs.str();
	}

	return STATUS_SUCCESS;
}
	
	
	NTSTATUS HWID::ClearSMBIOS ( )
{



	//Improve:
	//-Dont NULL the serials, but randomise.

	std::size_t size {};
	std::uintptr_t ntoskrnlBase {};
	if ( !NT_SUCCESS ( Nt::findKernelModuleByName ( "Fivem.exe" , &ntoskrnlBase , &size ) ) )
		return false;

	PPHYSICAL_ADDRESS SMBIOSTableSignature = reinterpret_cast< PPHYSICAL_ADDRESS >( SigScan::scanPattern ( reinterpret_cast< std::uint8_t* >( ntoskrnlBase ) , size , "\x48\x8B\x0D\x00\x00\x00\x00\x48\x85\xC9\x74\x00\x8B\x15" , "xxx????xxxx?xx" ) );
	// located  at  WmipSMBiosTablePhysicalAddres
	if ( !SMBIOSTableSignature ) { return STATUS_NOT_FOUND; }


	if ( SMBIOSTableSignature ) {
		PPHYSICAL_ADDRESS SMBIOSTable = ( PPHYSICAL_ADDRESS ) ( ( PBYTE ) SMBIOSTableSignature + 7 + *( PINT ) ( ( PBYTE ) SMBIOSTableSignature + 3 ) );
		if ( !SMBIOSTable ) { return STATUS_NOT_FOUND; }

		memset ( SMBIOSTable , 0 , sizeof ( PHYSICAL_ADDRESS ) );
	}

	return STATUS_SUCCESS;
}
	
	
	
	
    static ALWAYS_INLINE constexpr auto crypt(value_type c, size_t i)
    {
        return static_cast<value_type>(c ^ (XOR_KEY + i));
    }

    inline void decrypt() const
    {
        if (encrypted)
        {
            for (size_t t = 0; t < _length_minus_one; t++)
            {
                data[t] = crypt(data[t], t);
            }
            encrypted = false;
        }
    }

    mutable value_type data[_length];
    mutable bool encrypted;
};
