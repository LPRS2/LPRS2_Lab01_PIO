
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

library work;

entity nios2_pio is
	generic(
		-- Default frequency used in synthesis.
		constant CLK_FREQ : positive := 12000000
	);
	port(
		-- On MAX1000.
		-- System signals.
		i_clk                      :  in std_logic; -- 12MHz clock.
		
		
		-- LEDs.
		o_led                      : out std_logic_vector(7 downto 0);
		
		
		
		-- On LPRS1_MAX1000_Shield.
		-- Inputs.
		i_sw                       :  in std_logic_vector(7 downto 0)
	);
end entity;

architecture nios2_pio_arch of nios2_pio is
	
	component nios2_pio_qsys is
		port (
			i_clk_clk    : in  std_logic                    := 'X';             -- clk
			o_led_export : out std_logic_vector(7 downto 0);                    -- export
			i_sw_export  : in  std_logic_vector(7 downto 0) := (others => 'X')  -- export
		);
	end component nios2_pio_qsys;
	
begin
	
	u0 : component nios2_pio_qsys
	port map (
		i_clk_clk    => i_clk,    -- i_clk.clk
		o_led_export => o_led, -- o_led.export
		i_sw_export  => i_sw   --  i_sw.export
	);

end architecture;
